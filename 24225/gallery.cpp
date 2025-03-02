#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("GALLERY.INP", "r", stdin);
    //freopen("GALLERY.OUT", "w", stdout);

    int n;
    cin >> n;
    vector<int> Kt(n);
    for (int i = 0; i < n; ++i) {
        cin >> Kt[i];
    }
    long long totalGuests = 0;
    for (int i = 0; i < n; ++i) {
        totalGuests += Kt[i];
    }
    vector<long long> prefix(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix[i + 1] = prefix[i] + Kt[i];
    }
    long long totalDistance = 0;
    for (int i = 0; i < n; ++i) {
        totalDistance += i * Kt[i];
    }
    long long minDistance = totalDistance;
    int bestRoom = 0;
    for (int start = 1; start < n; ++start) {
        totalDistance += totalGuests - n * Kt[start - 1];
        if (totalDistance < minDistance) {
            minDistance = totalDistance;
            bestRoom = start;
        }
    }
    cout << bestRoom + 1 << " " << minDistance << endl;
    return 0;
}