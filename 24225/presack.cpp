#include <bits/stdc++.h>

using namespace std;

struct Item {
    int weight;
    int value;
    int maxPressure;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("PRESACK.INP", "r", stdin);
    freopen("PRESACK.OUT", "w", stdout);

    int n, S;
    cin >> n >> S;

    vector<Item> items(n);
    for (int i = 0; i < n; ++i) {
        cin >> items[i].weight >> items[i].value >> items[i].maxPressure;
    }

    int maxTotalValue = 0;

    for (int i = 0; i < (1 << n); ++i) {
        vector<Item> currentSubset;
        int totalWeight = 0;
        int totalValue = 0;

        for (int j = 0; j < n; ++j) {
            if ((i >> j) & 1) {
                currentSubset.push_back(items[j]);
                totalWeight += items[j].weight;
                totalValue += items[j].value;
            }
        }

        if (totalWeight <= S) {
            maxTotalValue = max(maxTotalValue, totalValue);
        } else {
            int pressure = totalWeight - S;
            bool valid = true;
            for (const auto& item : currentSubset) {
                if (pressure > item.maxPressure) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                maxTotalValue = max(maxTotalValue, totalValue);
            }
        }
    }

    cout << maxTotalValue << endl;

    return 0;
}