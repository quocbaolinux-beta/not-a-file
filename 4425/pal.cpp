#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isPalindrome(int n) {
        int rev = 0, temp = n;
        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        return rev == n;
        }
};
int main() {
    Solution s;
    int n;
    cin >> n; 
    cout << (s.isPalindrome(n) ? "true" : "false") << endl;
    return 0;
}
bool ispal(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}