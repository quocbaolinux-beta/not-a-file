#include <bits/stdc++.h>
using namespace std;
int maxarea=0, r;

bool check(int x, int y, int R) {
    return x * x + y * y <= R * R;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("DIENTICH.INP", "r", stdin);
    freopen("DIENTICH.OUT", "w", stdout);
    cin >> r;
    for (int x1 = -r; x1 <= r; ++x1) {
        for (int y1 = -r; y1 <= r; ++y1) {
            if (!check(x1, y1, r)) continue;
            for (int x2 = x1 + 1; x2 <= r; ++x2) {
                for (int y2 = y1 + 1; y2 <= r; ++y2) {
                    if (check(x2, y1, r) && check(x1, y2, r) && check(x2, y2, r)) {
                        int area = (x2 - x1) * (y2 - y1);
                        maxarea = max(maxarea, area);
                    }
                }
            }
        }
    }
    cout << maxarea << endl;
    return 0;
}
