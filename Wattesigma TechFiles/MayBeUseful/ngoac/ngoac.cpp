#include <bits/stdc++.h>
using namespace std;
string s;
long long kt,d;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
freopen("NGOAC.inp", "r", stdin);
freopen("NGOAC.out", "w", stdout);
getline(cin,s);
kt=1;
for(int i=0; i<s.size(); i++)
    {if(s[i]== '(')
        d=d+1;
        else
    if(s[i]== ')')
        d=d-1;
        if(d<0)
        {kt=0;
        break;}}
    if(kt==1)
    cout << "1";
    else
        cout<< "0";
    return 0;
}
