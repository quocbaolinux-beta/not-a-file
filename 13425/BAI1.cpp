#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
ll a, b, f, l, dem=0;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("BAI1.INP", "r", stdin);
    freopen("BAI1.OUT", "w", stdout);
    cin >> a >> b;
    cout << (b-1)/a-1 << endl;
    return 0;
}