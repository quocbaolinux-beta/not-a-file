#include <bits/stdc++.h>
using namespace std;
int demuoc(int n){
    int dem=0;
    for(int i=1;i<=sqrt(n); i++){
        if(n%i==0){
            dem++;
            if(n/i!=i){
                dem++;
            }
        }
    }
    return dem;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,dem=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            if(demuoc(i)==8){
                dem++;
            }
        }
    }
    cout << dem;
    return 0;
}