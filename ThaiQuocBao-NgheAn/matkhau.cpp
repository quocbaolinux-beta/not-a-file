#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("matkhau.inp", "r", stdin);
    freopen("matkhau.out", "w", stdout);
    int n;
    cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    string password = "";
    for (int i = 0; i < n; ++i) {
        map<char, int> count;
        for (char c : s[i]) {
            count[c]++;
        }
        for (auto& p : count) {
            if (p.second == 1) {
                password += p.first;
                break;
            }
        }
    }

    cout << password << endl;
    return 0;
}