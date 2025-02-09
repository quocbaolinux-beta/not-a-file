#include <bits/stdc++.h>
using namespace std;
int n, k, dem;
long long a[101], ss;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("hainam.inp", "r", stdin);
    //freopen("hainam.out", "w", stdout);
    cin >> n >> k;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    ss=k;
    dem=0;
    for(int i=1; i<=n; i++){
        if(a[i]<=ss){
            ss+=a[i];
            dem++;
        }
    }
    cout << dem;
    return 0;
}
//how to code faster?
//very easy answer!😊