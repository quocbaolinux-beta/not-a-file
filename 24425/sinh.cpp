#include <bits/stdc++.h>
using namespace std;

#define int long long

// Hàm tìm số chính phương gần nhất với n
int findClosestPerfectSquare(int n) {
    int sq = sqrtl(n);

    int x1 = sq * sq;
    int x2 = (sq + 1) * (sq + 1);

    if (abs(n - x1) < abs(n - x2)) return x1;
    if (abs(n - x1) > abs(n - x2)) return x2;
    return min(x1, x2); // Nếu bằng nhau chọn số nhỏ hơn
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    random_device rd;
    mt19937_64 rng(rd());
    uniform_int_distribution<int> dist(1, 1e18);
    
    int num_tests = 10; // Số lượng bộ test muốn sinh

    for (int test = 1; test <= num_tests; ++test) {
        string input_file = "BAI1-" + to_string(test) + ".INP";
        string output_file = "BAI1-" + to_string(test) + ".OUT";
        
        ofstream inp(input_file);
        ofstream outp(output_file);

        int n = dist(rng);
        inp << n << "\n";

        int res = findClosestPerfectSquare(n);
        outp << res << "\n";

        inp.close();
        outp.close();

        cout << "Đã sinh " << input_file << " và " << output_file << " với n = " << n << ", res = " << res << "\n";
    }
}
