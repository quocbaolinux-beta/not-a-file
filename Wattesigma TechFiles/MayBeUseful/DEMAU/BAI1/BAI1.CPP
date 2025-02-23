#include <bits/stdc++.h>
using namespace std;
long long n, i, dem;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  freopen("BAI1.INP", "r", stdin);
  freopen("BAI1.OUT", "w", stdout);
  cin >> n;
  dem=0;
  for(i=1; i<=n; i++)
    if (n%i==0)
      dem++;
  cout << dem;
  return 0;
}
