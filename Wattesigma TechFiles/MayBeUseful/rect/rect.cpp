#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("RECT.INP","r",stdin);
    freopen("RECT.OUT","w",stdout);
    int n;
   cin >> n;

    int x_min = INT_MAX, x_max = INT_MIN;
    int y_min = INT_MAX, y_max = INT_MIN;


    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        x_min = min(x_min, x);
        x_max = max(x_max, x);
        y_min = min(y_min, y);
        y_max = max(y_max, y);
    }


    cout << x_min << " " << y_min << endl;
    cout << x_max << " " << y_max << endl;
    return 0;
}
