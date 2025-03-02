#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;

        for (char& digit : n) {
            if (digit == '0') {
                digit = '5';
            }
        }

        cout << n << endl;
    }

    return 0;
}