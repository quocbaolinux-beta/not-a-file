#include <bits/stdc++.h>
using namespace std;
int a, b;
long long res = 0;
long long minc = 1;
bool isPrime(long long n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b;
    res = a + b;
    while(!isPrime(res+minc)) {
        minc++;
    }
    cout << minc;
    return 0;
}