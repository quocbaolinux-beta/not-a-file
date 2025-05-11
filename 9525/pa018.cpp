#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll m, n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    if(n%m==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}