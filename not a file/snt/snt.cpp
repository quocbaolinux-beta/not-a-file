#include <bits/stdc++.h>
using namespace std;
int n;
int checkprime(int n)
{
    if(n<=1) return 0;
    for(int i=2; i<=n; i++)
        if(n%i==0)
            return 0;
    return 1;
}
int tcs(int n) {
    int s = 0;
    while (n != 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}
void solve()
{
    cin >> n;
    cout << tcs(n) << endl;
    int k=tcs(n);
    if(checkprime(k)==1) cout << "YES";
    else cout << "NO";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solve();
    return 0;
}
