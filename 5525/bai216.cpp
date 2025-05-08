#include <bits/stdc++.h>
using namespace std;
int a, b, gab, calb;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("bai2.inp", "r", stdin);
    //freopen("bai2.out", "w", stdout);
    cin >> a >> b;
    gab = __gcd(a, b);
    a/=gab;
    b/=gab;
    if(a>b) swap(a,b);
    calb=b/3-(a-1)/3;
    cout << a << '/' << b << '\n' << calb;
    return 0;
}