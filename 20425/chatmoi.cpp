#include <bits/stdc++.h>
using namespace std;
long long ma, mb;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("chatmoi.inp", "r", stdin);
    freopen("chatmoi.out", "w", stdout);
    cin >> ma >> mb;
    if(ma==mb) cout << "v" << endl;
    else if(ma<mb) cout << "b" << endl;
    else cout << "dd" << endl;
    return 0;
}