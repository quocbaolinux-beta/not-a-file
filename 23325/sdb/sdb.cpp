#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a, b, dem;
int demuoc(int n)
{
    int dem=0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            dem++;
            if(n/i!=i)
                dem++;
        }
    }
    return dem;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("sdb.inp", "r", stdin);
    freopen("sdb.out", "w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a >> b;
        for(int i=a; i<=b; i++)
        {
            if(i%3==0){
                if(demuoc(i)==9)
                    dem++;
            }
        }
        cout << dem << "\n";
    }
    return 0;
}
