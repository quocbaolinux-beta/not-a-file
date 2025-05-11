#include <bits/stdc++.h>
using namespace std;
int a, b;
long i;
bool isprime(int n){
    if(n==1) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b;
    for(i=a; i<=b; i++){
        if(isprime(i)) cout << i << '\n';
    }
    return 0;
}