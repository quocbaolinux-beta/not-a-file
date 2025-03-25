#include <bits/stdc++.h>
using namespace std;
const int minn=1000;
int n;
int main()
{
    cin >> n;
    vector<int>a(n);
    for(int i-1; i<=n; i++)
    {
        cin >> a[i];
        minn=min(minn, a[i]);
    }
    cout << minn;
    return 0;
}
