#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(long long n) {
    long long reversed = 0, original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}
long long n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cin >> n;
    if(ispalindrome(n)) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}