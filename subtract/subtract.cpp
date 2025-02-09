#include <bits/stdc++.h>
using namespace std;
long long a, b;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("subtract.inp", "r", stdin);
    freopen("subtract.out", "w", stdout);
    int sumOdd = 0, sumEven = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            sumEven += i;
        }
        else {
            sumOdd += i;
        }
    }

    if (sumEven > sumOdd) {
        cout << 1 << "\n";
    }
    else {
        cout << 2 << "\n";
    }

    cout << abs(sumEven - sumOdd);

    return 0;
}
