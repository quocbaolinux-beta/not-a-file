#include <iostream>
#include <vector>
using namespace std;

void nhan(vector<int> &res, int x) {
    int carry = 0;
    for (int &digit : res) {
        int prod = digit * x + carry;
        digit = prod % 10;
        carry = prod / 10;
    }
    while (carry) {
        res.push_back(carry % 10);
        carry /= 10;
    }
}

void bigFactorial(int n) {
    vector<int> res = {1};
    for (int i = 2; i <= n; ++i)
        nhan(res, i);
    for (auto it = res.rbegin(); it != res.rend(); ++it)
        cout << *it;
    cout << '\n';
}

int main() {
    int n;
    cin >> n;
    bigFactorial(n);
    return 0;
}
