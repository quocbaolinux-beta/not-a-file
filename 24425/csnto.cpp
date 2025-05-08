#include <bits/stdc++.h>
using namespace std;
int k, a, b, dem=0;
bool demchuso(int n){
    int dem=0;
    if(n==0) return 1;
    while(n!=0){
        n/=10;
        dem++;
    }
    return dem==k;
}
bool isprime(int n){
    if(n<2) return false;
    for(int i=1; i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> k >> a >> b;
    for(int i=a; i<=b; i++){
        if(demchuso(i)){
            if(isprime(i)){
                dem++;
            }
        }
    }
    cout << dem;
    return 0;
}