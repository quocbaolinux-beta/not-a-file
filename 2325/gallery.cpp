#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("GALLERY.INP", "r", stdin);
    freopen("GALLERY.OUT", "w", stdout);

    int n;
    cin >> n;

    vector<int> r(n);
    for (int i = 0; i < n; ++i) {
        cin >> r[i];
    }

    int minDistance = 1e9;
    int bestStart = 1;

    for (int start = 0; start < n; ++start) {
        int distance = 0;
        vector<int> guests = r;

        for (int i = 0; i < n; ++i) {
            int room = (start + i) % n;
            int moves = 0;
            while (guests[room] > 0) {
                moves++;
                room = (room + 1) % n;
            }
            distance += moves;
            guests[room]--;
        }

        if (distance < minDistance) {
            minDistance = distance;
            bestStart = start + 1;
        }
    }

    cout << bestStart << endl;

    return 0;
}