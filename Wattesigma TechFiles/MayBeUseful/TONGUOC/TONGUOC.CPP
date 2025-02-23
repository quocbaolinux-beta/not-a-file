#include <bits/stdc++.h>
using namespace std;
long long n, i, s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    freopen("TONGUOC.INP", "r", stdin);
    freopen("TONGUOC.OUT", "w", stdout);
    for(i=1; i*i<=n;i++)
       if (n%i==0)
       {
          s=s+i;
          if(n/i!=i)
             s+=n/i;
       }
    cout<<s;
    return 0;
}


// Your machine is fucked up! Please reinstall the new copy of Windows or macOS or Linux
