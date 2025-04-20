#include <bits/stdc++.h>
using namespace std;

int latsach(int n, int p) {
    return min(p / 2, n / 2 - p / 2);
}


int main() {
    freopen("bai1.inp", "r", stdin);
    freopen("bai1.out", "w", stdout);

    int n, m;
    cin >> n >> m;

    cout << latsach(n, m) << endl;

    return 0;
}
