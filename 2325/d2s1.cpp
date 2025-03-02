#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int x;
    cin >> x;

    int dem = 0;
    while (x != 1) {
        if (x % 2 == 0) {
            x /= 2;
        } else {
            x -= 1;
        }
        dem++;
    }

    cout << dem << endl;

    return 0;
}