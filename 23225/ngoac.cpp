#include <bits/stdc++.h>
using namespace std;

bool isValidParentheses(const string& s) {
    int balance = 0;
    for (char c : s) {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
        }
        if (balance < 0) {
            return false;
        }
    }
    return balance == 0;
}

int main() {
    freopen("NGOAC.INP", "r", stdin);
    freopen("NGOAC.OUT", "w", stdout);

    string s;
    cin >> s;

    cout << (isValidParentheses(s) ? 1 : 0) << endl;

    return 0;
}
