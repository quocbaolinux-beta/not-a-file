#include <bits/stdc++.h>
#define int long long
#define double long double
#define endl '\n'
using namespace std;
int a, b,n;
bool isprime(int n){
    if(n<2) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}
int scln(int n){
    int md = -1;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0 && d > md)
            md = d;
        n /= 10;
    }
    return md;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("bai2.inp","r", stdin);
    freopen("bai2.out","w", stdout);
    cin >> a >> b >> n;
    for(int i=a; i<=b; i++){
        if(isprime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
    int md = scln(n);
    if(md == -1) cout << -1 << endl;
    else cout << md << endl;
    return 0;
}