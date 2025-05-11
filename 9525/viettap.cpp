#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("VIETTAP.INP", "r", stdin);
    freopen("VIETTAP.OUT", "w", stdout);
    long long v1, t1, s1;
    cin >> v1 >> t1 >> s1;
    long long v2, t2, s2;
    cin >> v2 >> t2 >> s2;
    long long det = v1 * t2 - v2 * t1;
    long long dx = s1 * t2 - s2 * t1;
    long long dy = v1 * s2 - v2 * s1;
    long long xp = 0;
    long long yn = 0;
    if (det != 0) {
        xp = dx / det;
        yn = dy / det;
    }
    cout << 2 * xp << " " << 2 * yn << endl;
    return 0;
}