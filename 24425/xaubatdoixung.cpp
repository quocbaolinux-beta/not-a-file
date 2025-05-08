#include <bits/stdc++.h>
using namespace std;

int mi(string s) {
    int n = s.size();
    if (n == 1) return -1; 
    bool ok = true;
    for (int i = 0; i < n / 2; ++i)
        if (s[i] == s[n - i - 1])
            ok = false;

    if (ok) return 0;
    set<char> l(s.begin(), s.end());
    if (l.size() == 1) return -1;
    return 1;
}

int main() {
    cin.tie(0) -> ios_base::sync_with_stdio(false);
    string s;
    cin >> s;
    cout << mi(s) << '\n';
    return 0;
}
