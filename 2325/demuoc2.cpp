#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int maxVal = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        maxVal = max(maxVal, a[i]);
    }

    vector<int> dc(maxVal + 1, 0);

    for (int i = 1; i <= maxVal; ++i) {
        for (int j = i; j <= maxVal; j += i) {
            dc[j]++;
        }
    }

    int md = 0;
    for (int i = 0; i < n; ++i) {
        md = max(md, dc[a[i]]);
    }

    cout << md << endl;

    return 0;
}