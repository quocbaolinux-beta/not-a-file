#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define mp make_pair
#define debug(x) cerr << #x << " = " << (x) << endl
#define debug2(x, y) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << endl
#define debug3(x, y, z) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << ", " << #z << " = " << (z) << endl
#define debug4(x, y, z, w) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << ", " << #z << " = " << (z) << ", " << #w << " = " << (w) << endl
#define debug5(x, y, z, w, v) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << ", " << #z << " = " << (z) << ", " << #w << " = " << (w) << ", " << #v << " = " << (v) << endl
#define debug6(x, y, z, w, v, u) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << ", " << #z << " = " << (z) << ", " << #w << " = " << (w) << ", " << #v << " = " << (v) << ", " << #u << " = " << (u) << endl
#define debug7(x, y, z, w, v, u, t) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << ", " << #z << " = " << (z) << ", " << #w << " = " << (w) << ", " << #v << " = " << (v) << ", " << #u << " = " << (u) << ", " << #t << " = " << (t) << endl
#define file(x) freopen(x".in", "r", stdin), freopen(x".out", "w", stdout)
#define io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int a, b;

int tongcs(int n) {
    int s = 0;
    while (n) {
        s += n % 10;
        n /= 10;
    }
    return s;
}
bool checkprime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int32_t main(){
    io;
    cin >> a >> b;
    int ans = 0;
    for (int i = a; i <= b; i++) {
        if (checkprime(tongcs(i))) ans++;
    }
    cout << ans << endl;
    return 0;
}