#include <bits/stdc++.h>
using namespace std;
string checkParity(long long n) {
    int count = __builtin_popcountll(n);
    return (count % 2 == 0) ? "even" : "odd";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        long long n;
        cin >> n;
        cout << checkParity(n) << '\n';
    }
    return 0;
}
