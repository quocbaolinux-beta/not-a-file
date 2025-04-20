#include <bits/stdc++.h>
#define file(name) freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout);
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    file("CSLN");
    string s;
    cin >> s;

    if (s[0] == '-') s = s.substr(1);

    char maxd = '0';
    for (char c : s) {
        if (isdigit(c)) maxd = max(maxd, c);
    }

    cout << maxd << '\n';
    return 0;
}