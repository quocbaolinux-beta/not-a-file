#include <bits/stdc++.h>
using namespace std;
int a[8];
void input()
{
    for (int i = 1; i <= 8; i++)
        cin >> a[i];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("chiabanh.inp", "r", stdin);
    freopen("chiabanh.out", "w", stdout);
    input();
    int maxSum = 0;
    for (int i = 0; i < 4; ++i) {
        maxSum += a[i];
    }

    int cs = maxSum;
    for (int i = 1; i < 8; ++i) {
        cs = cs - a[i - 1] + a[(i + 3) % 8];
        if (cs > maxSum) {
            maxSum = cs;
        }
    }

    cout << maxSum << endl;
    return 0;
}