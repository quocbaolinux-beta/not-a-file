#include <bits/stdc++.h>
using namespace std;
long long a, b, res = 0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b;
    for(int i=a; i<=b; i++)
    {
        res=pow(2, i);
    }
    cout << res;
    return 0;
}