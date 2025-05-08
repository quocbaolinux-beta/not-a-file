#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int n, k, dem=0;
int main(){
    io;
    for(int i=1; i<=n; i++){
        if(__builtin_popcount(i)==k){
            dem++;
        }
    }
    cout << dem << endl;
    return 0;
}