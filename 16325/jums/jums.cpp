#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    if (v1 <= v2) {
        cout << -1 << endl;
        return 0;
    }

    if ((x2 - x1) % (v1 - v2) == 0) {
        cout << (x2 - x1) / (v1 - v2) << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
