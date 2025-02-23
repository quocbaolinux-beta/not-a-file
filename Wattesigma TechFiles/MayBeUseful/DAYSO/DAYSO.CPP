#include <bits/stdc++.h>
using namespace std;
long long a, b, i;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("DAYSO.INP", "r", stdin);
    freopen("DAYSO.OUT", "w", stdout);
    cin >> a >> b;
    for(i=a; i<=b; i++)
    {
        if(i%2==0 || i%3==1)
            cout << i << " ";
    }
    return 0;
}
