#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("trungthuong.inp" ,"r", stdin);
    freopen("trungthuong.out", "w", stdout);
    int n;
    cin >> n;
    vector<int> c(n);
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int minVal = c[i], maxVal = c[i];
            for (int k = i + 1; k <= j; ++k) {
                if (c[k] < minVal) {
                    minVal = c[k];
                }
                if (c[k] > maxVal) {
                    maxVal = c[k];
                }
            }
            if ((c[i] == minVal && c[j] == maxVal) || (c[i] == maxVal && c[j] == minVal)) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}