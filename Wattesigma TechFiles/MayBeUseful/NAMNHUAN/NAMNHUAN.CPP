#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("NAMNHUAN.INP", "r", stdin);
    freopen("NAMNHUAN.OUT", "w", stdout);
    cin >> n;
    if(n%3328==0)
        cout << "Multi leap";
    else
        if(n%400==0)||(n%4==0 && n%100=0)
            cout << "Leap";
        else
            cout << "No";
    return 0;
}
