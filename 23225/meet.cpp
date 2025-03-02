#include <bits/stdc++.h>
using namespace std;

bool isValidString(const string& s) {
    int count = 0;
    for (char c : s) {
        if (c == '+') {
            count++;
        } else if (c == '-') {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }
    return (count == 0);
}

int maxStudents(const string& s) {
    int count = 0, maxCount = 0;
    for (char c : s) {
        if (c == '+') {
            count++;
        } else if (c == '-') {
            count--;
        }
        maxCount = max(maxCount, count);
    }
    return maxCount;
}

int main() {
    freopen("MEET.INP", "r", stdin);
    freopen("MEET.OUT", "w", stdout);

    string s;
    cin >> s;

    if (isValidString(s)) {
        cout << maxStudents(s) << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
