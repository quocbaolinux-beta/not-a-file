#include <bits/stdc++.h>
using namespace std;
long long a, b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("wrong.inp", "r", stdin);
    freopen("wrong.out", "w", stdout);
    cin >> a >> b;
    long long c=b-a;
    string ans="";
    if (c==0) ans="9";
    else{
        while(c>0)
        {
            ans.push_back(c%10+'0');
            c/=10;
        }
        reverse(ans.begin(),  ans.end());
    }
    if(ans[0]=='9') ans[0]=8;
    else ans[0]='9';
    cout << ans;
    return 0;
}