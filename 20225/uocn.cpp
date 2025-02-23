#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
            cout << i << " ";
    }
    return 0;
}