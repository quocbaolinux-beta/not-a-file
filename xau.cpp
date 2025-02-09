#include <bits/stdc++.h>
#define int long long

using namespace std;
int cnt[26], resVal, resInd;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("xau.inp", "r", stdin);
    freopen("xau.out", "w", stdout);
    string s;
    cin >> s;
    s = "#" + s;

    int j = 1;
    for (int i = 1; i < s.size(); i++) {
        cnt[s[i] - 'A']++;
        while (cnt[s[i] - 'A'] > 1) {    
            cnt[s[j] - 'A']--;
            j++;
        }

        if (resVal < (i-j+1)) {
            resVal = i-j+1;
            resInd = j;
        }
    }

    cout << resInd << " " << resVal << "\n";

    return 0;
}
