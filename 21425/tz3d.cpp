#include <bits/stdc++.h>
using namespace std;
int demouc(int n){
    int dem=0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            dem++;
            if(n/i!=i)
                dem++;
        }
    }
    return dem;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    cout << demouc(n);
    return 0;
}