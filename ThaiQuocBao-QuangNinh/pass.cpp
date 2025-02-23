#include <bits/stdc++.h>

using namespace std;

vector<int> findMaxSegment(const string& s) {
    int n = s.length();
    vector<int> prefixSum(n + 1, 0);
    
    for (int i = 1; i <= n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + (s[i - 1] - '0');
    }
    
    for (int len = n; len >= 1; --len) {
        unordered_map<int, int> sumMap;
        for (int i = 0; i + len <= n; ++i) {
            int currentSum = prefixSum[i + len] - prefixSum[i];
            if (sumMap.find(currentSum) != sumMap.end()) {
                return {sumMap[currentSum] + 1, sumMap[currentSum] + len, i + 1, i + len};
            }
            sumMap[currentSum] = i;
        }
    }
    
    return {-1};
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("pass.inp", "r", stdin);
    freopen("pass.out", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector<int> result = findMaxSegment(s);
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}