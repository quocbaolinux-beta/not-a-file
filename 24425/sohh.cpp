#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool shh(ll n){
    long long tong=0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0) {
            tong+=i;
            if(n/i!=i)
                tong+=n/i;
        }
    }
    return tong-n==n;
}
ll n;
int main(){
    cin.tie(NULL) -> ios_base::sync_with_stdio(false);
    cin >> n;
    if(shh(n)) cout << 1 << '\n';
    else cout << 0 << '\n';
    return 0;
}