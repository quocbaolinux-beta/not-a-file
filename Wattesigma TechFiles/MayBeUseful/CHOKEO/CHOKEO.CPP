#include <bits/stdc++.h>
using namespace std;
long long a, b, k, x, y, cam, chanh, ca, ch;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("CHOKEO.INP", "r", stdin);
    freopen("CHOKEO.OUT", "w", stdout);
    cin >> a >> b >> k >> x >> y;
    cam = a*k-x;
    chanh = b*k-y;
    ca = ceil(cam/2.0);
    ch = ceil(chanh/2.0);
    cout << ca << " " << ch;
    return 0;
}
