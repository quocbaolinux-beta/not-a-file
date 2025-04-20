#include <bits/stdc++.h>
#define file(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    file("CAU1");
    long long a, b, c;
    cin >> a >> b >> c;
    long long res = 1;
    for(long long i=a; i<=b;++i) {
        res=(res*i)%c;
    }
    cout << res << '\n';
    return 0;
}
