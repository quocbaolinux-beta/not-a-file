#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll cala(ll n){
    ll p = 2018*6;
    ll A = ((n%p)*((n+1)%p)%p*((n+2)%p)%p*((2*n-1)%p)%p)/6;
    return A%2018;
}
ll n, a, b;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("bai2.inp", "r", stdin);
    freopen("bai2.out", "w", stdout);
    cin >> n >> a >> b;
    cout << cala(n) << '\n';
    for (int i = a; i <= b; i++) {
        bool check = true;
        if (i == 1) {
            check = false;
        }
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                check = false;
                break;
            }
        }
        if (check == true) {
            cout << i << " ";
            break;
        }
    }
    for (int i = b; i >= a; i--) {
        bool check = true;
        
        if (i == 1) {
            check = false;
        }
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                check = false;
                break;
            }
        }
        if (check == true) {
            cout << i;
            break;
        }
    }
    return 0;
}