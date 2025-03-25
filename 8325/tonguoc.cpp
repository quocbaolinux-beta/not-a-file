#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxn 1000005
#define MOD 1000000007
#define pii pair<int, int>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define reset(x) memset(x, 0, sizeof(x))
#define debug(x) cout << #x << " = " << x << endl
#define debug2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define debug3(x, y, z) cout << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << endl
using namespace std;
int n, tong=0;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0){
            tong+=i;
            if(i!=n/i) tong+=n/i;
        }
    }
    cout << tong << endl;
    return 0;
}