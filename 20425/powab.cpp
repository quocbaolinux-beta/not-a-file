#include <bits/stdc++.h>
#define file(name) freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout);
using namespace std;
long long n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    file("giaohuu");
    cin >> n;
    unordered_set<long long> s;

    for (long long a=2; a<=sqrt(n); ++a) {
        long long val=a*a;
        while (val<=n) {
            s.insert(val);
            if (val>n/a) break;
            val*=a;
        }
    }

    cout << s.size() << '\n';
    return 0;
}