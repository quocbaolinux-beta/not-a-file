#include <bits/stdc++.h>

using namespace std;
long long p, q, r;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("BAITAP327.INP", "r", stdin);
    freopen("BAITAP327.OUT", "w", stdout);
    cin >> p >> q >> r;
    if (p > max(q,r))
        cout << "AN";
    else
    {
        if (q>max(p,r))
            cout << "VINH";
        else
        {
            if (r > max(p,q))
                cout << "QUANG";
            else
                cout << "BAU LAI";
        }
    }
    return 0;
}
