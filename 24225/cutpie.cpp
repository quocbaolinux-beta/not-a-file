#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
using namespace std;
ull a,b,c;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("cutpie.inp", "r", stdin);
    freopen("cutpie.out", "w", stdout);
    cin >> a >> b >> c;
    for(ull i=1; i<=b; i++){
        a*=2;
    }
    cout << a%c;
    return 0;
}
