#include <bits/stdc++.h>
using namespace std;
int n;
const int N=1e6+1;
long long a[N], maxn=LLONG_MIN, minn=LLONG_MAX;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        maxn=max(maxn, a[i]);
        minn=min(minn, a[i]);
    }
    cout << maxn << '\n' << minn;
    return 0;
}