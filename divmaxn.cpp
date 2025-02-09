#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int n, xx, onest;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    cin >> onest;
    for(int i=1; i<n; i++) {
        cin >> xx;
        onest = __gcd(onest, xx);
        if(onest==1) {
            break;
        }
    }
    cout << onest;
    return 0;
}