#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll a, b, dem=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("bai1.inp", "r", stdin);
    //freopen("bai1.out", "w", stdout);
    cin >> a >> b;
    dem+=a;
    dem+=b/3;
    if(b%3!=0){
        dem++;
    }
    cout << dem << "\n";
    return 0;
}