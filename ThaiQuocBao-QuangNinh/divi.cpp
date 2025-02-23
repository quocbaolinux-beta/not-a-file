#include <bits/stdc++.h>
#define False false
#define d cin.tie(NULL)
#define s cout.tie(NULL)
using namespace std;

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    d; s;
    freopen("divi.inp", "r", stdin);
    freopen("divi.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    int count = 0;

    for (int x = 1; x <= n; x++) {
        int dx = countDivisors(x);
        for (int y = x; y <= n; y++) {
            int dy = countDivisors(y);
            if (k * dx * dy == x * y) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
