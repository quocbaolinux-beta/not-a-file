#include <bits/stdc++.h>
using namespace std;
long long n, kq;
int countZeros(int n) {
    int count = 0;
    for (int i = 5; i <= n; i *= 5) {
        count += n / i;
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("NUMBER0.INP", "r", stdin);
    freopen("NUMBER0.OUT", "w", stdout);
    cin >> n;
    cout << countZeros(n) << endl;
    return 0;
}
