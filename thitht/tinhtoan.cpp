#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
long long sodep(long long n) {
    long long m = n / 9; 
    return (m * (9 + 9 * m)) / 2;
}

int n, tong=0;
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    cout << sodep(n) << endl;
    return 0;
}