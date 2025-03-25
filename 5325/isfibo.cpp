#include <bits/stdc++.h>
#define int long long
using namespace std;
int t;
bool isfibo(int n)
{
    int a=0, b=1;
    while(b<n)
    {
        int c=a+b;
        a=b;
        b=c;
    }
    return b==n;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    int k[t];
    for(int i=1; i<=t; i++)
    {
        cin >> k[i];
    }
    for(int i=1; i<=t; i++)
    {
        if(isfibo(k[i]))
        {
            cout << "IsFibo\n";
        }
        else
        {
            cout << "IsNotFibo\n";
        }
    }
    return 0;
}