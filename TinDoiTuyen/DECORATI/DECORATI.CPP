#include <iostream>
using namespace std;
long long n, x;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("DECORATI.INP", "r", stdin);
    freopen("DECORATI.OUT", "w", stdout);

    cin >> n >> x;

    long long num = (n + 1) / 2;
    long long c = num * x;

    cout << c;

    return 0;
}
