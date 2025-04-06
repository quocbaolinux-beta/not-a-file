#include <bits/stdc++.h>
using namespace std;
long long n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("RABBWOLV.INP", "r", stdin);
    freopen("RABBWOLV.OUT", "w", stdout);
    cin >> n;

    long long x;
    int ml = 0, cl = 0;

    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x > 0) {
            cl++;
            ml = max(ml, cl);
        } else {
            cl = 0;
        }
    }

    cout << ml;

    return 0;
}
