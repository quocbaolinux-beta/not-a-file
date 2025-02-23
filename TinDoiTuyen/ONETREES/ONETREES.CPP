#include <bits/stdc++.h>
using namespace std;

int a[10001], b[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("ONETREES.INP", "r", stdin);
    freopen("ONETREES.OUT", "w", stdout);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    b[0] = 1;
    for (int i = 1; i < n; i++) {
        b[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[i] >= a[j]) {
                b[i] = max(b[i], b[j] + 1);
            }
        }
    }

    cout << *max_element(b, b + n) << '\n';
    return 0;
}
