#include <bits/stdc++.h>
using namespace std;
char findKthDigit(int k) {
    std::string num_str = "";
    int num = 1;
    while (num_str.length() < k) {
        int current_num = num;
        std::string current_str = "";
        while (current_num > 0) {
            current_str = char((current_num % 10) + '0') + current_str;
            current_num /= 10;
        }
        if (current_str.empty()) current_str = "0"; 
        num_str += current_str;
        num++;
    }
    return num_str[k - 1];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("number.inp", "r", stdin);
    freopen("number.out", "w", stdout);
    long long n;
    cin >> n;
    cout << findKthDigit(n);
    return 0;
}