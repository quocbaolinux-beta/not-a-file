#include <bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int k;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("timmin.INP", "r", stdin);
    freopen("timmin.OUT", "w", stdout);
    cin >> k >> s;
    int n = s.size();
    if (k >= n) {
        cout << 0;
        return 0;
    }
    string kg = "";
    int L = n - k;
    int pos = 0;
    for (int i = 0; i < L; i++) {
        char minChar = 'z' + 1;
        for (int j = pos; j <= k + i; j++) {
            if (s[j] < minChar) {
                minChar = s[j];
                pos = j + 1;
            }
        }
        kg += minChar;
    }
    cout << kg;
    return 0;
}
