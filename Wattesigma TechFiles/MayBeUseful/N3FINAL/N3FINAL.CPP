#include <bits/stdc++.h>
using namespace std;
long long n, kq;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("N3FINAL.INP", "r", stdin);
    freopen("N3FINAL.OUT", "w", stdout);
    cin >> n;
    kq = n % 4;
    if (kq==1)
        cout << "3";
    if (kq==2)
        cout << "9";
    if (kq==3)
        cout << "7";
    if (kq==4)
        cout << "1";
    return 0;
}
