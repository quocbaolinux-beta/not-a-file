#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("HTHOC.INP", "r", stdin);
    freopen("HTHOC.OUT", "w", stdout);
    int k,s=0;
    cin>>k;
    s+=k*45;
    for(int i=1;i<k;i++)
    {
        if(i%2==1) s+=10;
        else s+=5;
    }
    cout<<s/60 + 7<<" "<<s%60;
}
