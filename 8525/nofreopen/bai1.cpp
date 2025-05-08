#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll a, b;
    cin >> a >> b;
    ll dem=0;
    dem+=a;
    dem+=b/3;
    if(b%3!=0){
        dem++;
    }
    cout << dem << '\n';
    return 0;
}