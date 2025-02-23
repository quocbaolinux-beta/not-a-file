#include <bits/stdc++.h>
using namespace std;
long long n;
long long tongcs(long long number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("d162.inp", "r", stdin);
    freopen("d162.out", "w", stdout);
    cin >> n;
    cout << tongcs(n)<<endl;
    if(n%2==0) cout << "CHAN";
    else cout <<" LE";
    return 0;
}