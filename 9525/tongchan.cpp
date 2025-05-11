#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("TONGCHAN.INP", "r", stdin);
    freopen("TONGCHAN.OUT", "w", stdout);
    int n;
    cin >> n;
    long long ec = 0;
    long long oc = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            ec++;
        } else {
            oc++;
        }
    }
    long long ans = 0;
    if (ec >= 2) {
        ans += ec * (ec - 1) / 2;
    }
    if (oc >= 2) {
        ans += oc * (oc - 1) / 2;
    }

    cout << ans << endl;

    return 0;
}