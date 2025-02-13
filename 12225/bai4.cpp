#include <bits/stdc++.h>
using namespace std;
string s, y;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("bai4.inp", "r", stdin);
    freopen("bai4.out", "w", stdout);
    cin >> s;
    for(char c:s)
    {
        y.push_back(c);
        reverse(y.begin(), y.end());
    }
    cout << y;
    return 0;
}