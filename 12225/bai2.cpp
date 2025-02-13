#include <bits/stdc++.h>   
using namespace std;
int a, b, dem = 0;
bool ispalimdrone(int x)
{
    int y = 0, z = x;
    while (x > 0)
    {
        y = y * 10 + x % 10;
        x /= 10;
    }
    return y == z;
}
bool co3uoc(int n) {
    int count = 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            count++;
            while (n % i == 0) n /= i;
        }
    }
    if (n > 1) count++;
    return count >= 3;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); 
    freopen("bai2.inp", "r", stdin);
    freopen("bai2.out", "w", stdout);
    cin >> a >> b;
    for(int i=a; i<=b; i++)
    {
        if(ispalimdrone(i) && co3uoc(i))
        {
            dem++;
        }
    }
    cout << dem;
    return 0;
}