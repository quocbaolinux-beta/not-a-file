#include <bits/stdc++.h>
using namespace std;

int mam(int matchsticks[], int n) {
    unordered_map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        freq[matchsticks[i]]++;
    }

    int additional = 0;
    for (auto& pair : freq) {
        int count = pair.second;
        while (count % 4 != 0) {
            count++;
            additional++;
        }
    }

    return additional;
}

int main() {
    int n;
    cin >> n;

    int m[n];
    for (int i = 0; i < n; ++i) {
        cin >> m[i];
    }

    int result = mam(m, n);
    cout << result << endl;

    return 0;
}
