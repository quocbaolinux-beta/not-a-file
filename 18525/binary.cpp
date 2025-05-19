#include <bits/stdc++.h>
using namespace std;
long long n;
void dtb(long long n){
    int bin[32];
    long long i=0;
    while(n>0){
        bin[i]=n%2;
        n/=2;
        i++;
    }
    for(long long j=i; j>=0; j--){
        cout << bin[j];
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    dtb(n);
    return 0;
}