#include <bits/stdc++.h>
using namespace std;
long long ans=0, n;
bool x(string n)
{
    if(n[n.size()-1]!='0') return 0;
    long long sum=0;
    for(char i:n) sum +=i-'0';
    return sum%9==0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("cau1.inp", "r", stdin);
    freopen("cau1.out", "w", stdout);
    cin >> n;
    string a;
    while(n--)
    {
        cin >> a;
        if(x(a)) ans++; 
    }
    cout << ans;
    return 0;
}