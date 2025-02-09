#include <bits/stdc++.h>
using namespace std;

int p, q;

int reverse_number(int n) {
    int res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);

    freopen("bai02.inp", "r", stdin);
    freopen("bai02.out", "w", stdout);

    cin >> p >> q;
    bool a[100001];
    fill(a, a + 100001, true);
    a[0] = a[1] = false;

    for (int i = 2; i * i <= 100000; i++) {
        if (a[i]) {
            for (int j = i * i; j <= 100000; j += i) {
                a[j] = false;
            }
        }
    }

    for (int i = p; i <= q; i++) {
        int d = reverse_number(i);
        if (a[i] && a[d]) {
            cout << i << endl;
        }
    }

    return 0;
}