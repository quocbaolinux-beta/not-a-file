#include <bits/stdc++.h>
using namespace std;
int dem=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for(int i=1; i<=n ;i++)
    {
        if(n%i==0)
            dem++;
    }
    cout << dem;
    return 0;
}