#include <bits/stdc++.h>
using namespace std;
int n;
long long k[201];
bool isprime(int n)
{
    if(n<=1) return false;
    if(n<=3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i=5; i*i<=n; i+=6)
    {
        if(n%i==0 || n%(i+2)==0) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("goldbach.inp", "r", stdin);
    freopen("goldbach.out", "w", stdout);
    cin >> n;
    for(int i =1; i<=n; i++)
    {
        cin >> k[i];
    }

    for (int i = 1; i <= n; ++i) {
        long long num = k[i];
        if (num <= 3 || num % 2 != 0) {
            continue; 
        }

        for (int p1 = 2; p1 <= num / 2; ++p1) {
            if (isprime(p1) && isprime(num - p1)) {
                cout << p1 << " " << num - p1 << endl;
                break; 
            }
        }
    }

    return 0;
}