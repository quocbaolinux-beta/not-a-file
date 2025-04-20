#include <bits/stdc++.h>
#define file(name) freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout);
using namespace std;
const int MAXN = 1e5;
long long n, m, a[MAXN], b[MAXN];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    file("giaohuu");
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i =1; i<=n; i++){
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+n);
    long long i=0, j=0;
    long long mind = LLONG_MAX;
    while(i<n&&j<m){
        long long d = abs(a[i]-b[j]);
        mind = min(mind, d);
        if(a[i]<b[j]) i++;
        else j++;
    } 
    cout << mind << endl;
    return 0;
}