#include <bits/stdc++.h>
using namespace std;
unsigned long long n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("bai01.inp", "r", stdin);
    //freopen("bai01.out", "w", stdout);
    cin >> n;
    if (n < 2) {
        cout << 0 << endl;
    } 
    else {
        unsigned long long h = n * (n - 1) / 2;
        cout << h << endl;
    }

    return 0;
}