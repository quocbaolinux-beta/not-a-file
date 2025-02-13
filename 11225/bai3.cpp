#include <bits/stdc++.h>
using namespace std;
int demuoc(int num) {
    int dem = 0;
    for (int i = 1; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            dem++;
            if (i != num / i) dem++;
        }
    }
    return dem;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);
    int n, k;
    cin >> n >> k;

    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    int maxDivisors = 0;
    for (int i = 0; i < n; ++i) {
        maxDivisors = max(maxDivisors, demuoc(A[i]));
    }

    vector<int> positions;
    for (int i = 0; i < n; ++i) {
        if (demuoc(A[i]) == maxDivisors) {
            positions.push_back(i);
        }
    }

    if (positions.size() < k) {
        cout << -1 << endl;
        return 0;
    }

    int minLength = INT_MAX;
    for (int i = 0; i <= positions.size() - k; ++i) {
        minLength = min(minLength, positions[i + k - 1] - positions[i] + 1);
    }

    cout << minLength << endl;
    return 0;
}