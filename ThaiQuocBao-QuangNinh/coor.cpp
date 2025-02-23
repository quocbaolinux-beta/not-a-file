#include <bits/stdc++.h>
using namespace std;
string s;
long long x=0, y=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("coor.inp", "r", stdin);
    freopen("coor.out", "w", stdout);
    cin >> s;
    for (char c : s) {
        if (c == 'E') x++;
        else if (c == 'S') y--;
        else if (c == 'W') x--;
        else if (c == 'N') y++;
    }
    cout << x << " " << y << endl;
    return 0;
}