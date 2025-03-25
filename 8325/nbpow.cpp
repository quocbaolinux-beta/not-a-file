#include <bits/stdc++.h>
#define int long long
using namespace std;
int sqr(int x) {
    return x*x;
}
int power(int a, int b) {
    if (b == 0) return 1;
    else
        if (b % 2 == 0)
            return sqr(power(a, b/2));
        else
            return a * (sqr(power(a, b/2)));
}
int a, b;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b;
    cout << power(a, b);
    return 0;
}