#include <bits/stdc++.h>
#define int long long
using namespace std;

int dtd(int a, int b, int c) {
    if (a + b > c) {
        if (a > b) a -= c;
        else b -= c;
    } else {
        return 0;
    }
    return min(a / 2, b);
}

signed main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << dtd(a, b, c) << endl;
    return 0;
}
