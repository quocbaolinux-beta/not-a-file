#include <bits/stdc++.h>
using namespace std;
int n;
const int N=1e5+1;
long long a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    if(n%2==0) cout << a[n/2];
    else cout << a[(n-1)/2];
    return 0;
}