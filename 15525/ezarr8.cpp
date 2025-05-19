#include <bits/stdc++.h>
using namespace std;
int n;
const int N=1e5+1;
long long a[N], x, dem=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> x;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=1; i<=n; i++){
        if(a[i]<x) dem++;
    }
    cout << dem;
    return 0;
}