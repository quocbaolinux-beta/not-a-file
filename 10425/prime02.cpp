#include <bits/stdc++.h>
using namespace std;

int isprime(long long n){
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}
long long n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    while (cin >> n){
        cout << isprime(n) << "\n";
    }
    return 0;
}