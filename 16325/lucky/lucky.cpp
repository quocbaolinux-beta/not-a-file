#include <bits/stdc++.h>
#define int long long
using namespace std;
int maxodd=1e18,semiodd=-1e18;
int maxeven=1e18,semieven=-1e18;
void io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
void inout()
{
    freopen("LUCKY.INP", "r", stdin);
    freopen("LUCKY.OUT", "w", stdout);
}
void solve()
{
    unsigned int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        if(x%2==0){
            if(maxeven<x)
            {
                semieven=maxeven;maxeven=x;
            }
            else{
                semieven=max(semieven, x);
            }
        }
        else{
            if(maxodd<x){
                semiodd=maxodd;
                maxodd=x;
            }
            else{
                semiodd=max(semiodd, x);
            }
        }
    }
    cout << max(maxodd+semiodd, maxeven+semieven);
}

signed main() {
    io();
    inout();
    solve();
    return 0;
}
