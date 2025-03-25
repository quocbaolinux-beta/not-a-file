#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long double tong=0;
    cin >> n;
    double a[n];
    for(int i=1; i<=n; i++){
        cin >> a[i];
        tong+=a[i];
    }
    cout << fixed << setprecision(3) << tong/n << endl;
    return 0;
}
