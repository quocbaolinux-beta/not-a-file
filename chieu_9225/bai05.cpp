#include <bits/stdc++.h>
using namespace std;
long long k;
int rev(int n)
{
    int res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("bai05.inp", "r", stdin);
    //freopen("bai05.out", "w", stdout);
    cin >> k;
    long long a=1, b=1;
    for(int i=2; i<=k; i++)
    {
        a=rev(a)+2;
        b+=2;
        if(b%5==0) b+=2;
    }
    cout << a << endl << b;
    return 0;
}