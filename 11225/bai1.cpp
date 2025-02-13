#include <bits/stdc++.h>
using namespace std;
long long sumnum(const string &s) {
    long long sum = 0;
    string num = "";
    
    for (char c : s) {
        if (isdigit(c)) {
            num += c;
        } else {
            if (!num.empty()) {
                sum += stoll(num);
                num = "";
            }
        }
    }
    if (!num.empty()) {
        sum += stoll(num);
    }
    
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("BAI1.INP", "r", stdin);
    freopen("BAI1.OUT", "w", stdout);
    
    string s;
    cin >> s;
    
    long long res = sumnum(s);
    
    if (res == 0) {
        cout << -1 << endl;
    } else {
        cout << res << endl;
    }
    
    return 0;
}
