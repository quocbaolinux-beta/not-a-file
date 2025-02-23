#include <bits/stdc++.h>
using namespace std;
int n, a, b, p;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("cost.inp", "r", stdin);
    freopen("cost.out", "w", stdout);
    cin >> n >> a >> b;
    vector<long long>x(n);
    for(int i =1; i<=n; i++)
        cin >> x[i];
    sort(x.begin(), x.end(), greater<int>());
    p=0;
    int i =0;
    int j=0;
    while (i<n)
    {
        if(x[i]==2)
        {
            p+=a+b;
            i++;
            j++;
        }
        else{
            p=min(a, b);
            i++;
        }
    }
    cout << p << endl;
    return 0;
}
