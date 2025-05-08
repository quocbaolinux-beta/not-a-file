#include <bits/stdc++.h>
using namespace std;
int a,b;
bool isprime(int n){
    if(n<2) return false;
    for(int i =1; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}
int tongcs(int n){
    int tong=0;
    while(n!=0){
        tong+=n%10;
        n/=10;
    }
    return tong;
}
int tichcs(int n){
    int tich=0;
    while(n!=0){
        tich*=n%10;
        n/=10;
    }
    return tich;
}
bool sodacbiet(int n){
    if(isprime(n) && tongcs(n)%2==0 && tichcs(n)!=0) return true;
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >>a >> b;
    for(int i =a; i<=b; i++){
        if(sodacbiet(i)) cout << i << " ";
    }
    return 0;
}