#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll l, r, res=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> l >> r;
    for(int i=l; i<=r; i++) {
        if(i%13!=0) {
            res += i;
        }
    }
    cout << res;
    return 0;
}