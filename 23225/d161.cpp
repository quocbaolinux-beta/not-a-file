#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("d161.inp", "r", stdin);
    freopen("d161.out", "w", stdout);
    int N;
    cin >> N;

    long long S = 0;
    for (int i = 1; i <= N; i++) {
        S += 3 * i;
    }

    cout << S << endl;

    return 0;
}
