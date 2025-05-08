#include <bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define file(name) freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout);
using namespace std;
int a, b, x;
signed main(){
    io;
    file("HATDE");
    cin >> a >> b >> x;
    if(a>=b){
        cout << 0 << endl;
    }
    else{
        cout << (b-a+x-1)/x << endl;
    }
    return 0;
}