#include <bits/stdc++.h>
using namespace std;
int n, x;
const int N=1e5+1;
long long a[N], tong=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    cin >> x;
    for(int i=1; i<=n; i++){
        if(i==x) continue;
        tong+=a[i];
    }
    cout << tong;
    return 0;
}