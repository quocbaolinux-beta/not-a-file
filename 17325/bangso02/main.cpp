#include <bits/stdc++.h>
using namespace std;
void io()
{
    cin.tie(0)->ios_base::sync_with_stdio(false);
}
int32_t main()
{
    io();
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
            cout << i + j << " ";
        }
        cout << '\n';
    }
    return 0;
}
