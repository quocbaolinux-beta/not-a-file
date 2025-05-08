#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    io;
    long long M, N;
    cin >> M >> N;
    cout << M / N;
    M %= N;
    if (M == 0) return 0;
    cout << ',';
    map<long long, int> pos;
    string frac = "";
    int idx = 0;
    int cycle_start = -1;

    while (M != 0) {
        if (pos.count(M)) {
            cycle_start = pos[M];
            break;
        }
        pos[M] = idx++;
        M *= 10;
        frac += (M / N) + '0';
        M %= N;
    }
    if (cycle_start == -1) {
        cout << frac; 
    } else {
        for (int i = 0; i < cycle_start; ++i) cout << frac[i];
        cout << '(';
        for (int i = cycle_start; i < frac.size(); ++i) cout << frac[i];
        cout << ')';
    }
    return 0;
}
