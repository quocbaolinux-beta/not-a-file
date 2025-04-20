#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
// No freopen
bool isprime(int n){
    for(int i = 2; 1LL * i * i <= n; i++){
        if(n%i==0) return false;
    }
    return n>1;
}
bool sup(int n) {
    while (n > 0) {
        if (!isprime(n)) return false;
        n /= 10;
    }
    return true;
}
int n;
signed main(){
    io;
    int dem = 0;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        if (sup(x)) ++dem;
    }
    cout << dem;
    return 0;
}