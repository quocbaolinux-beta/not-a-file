#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("d165.inp", "r", stdin);
    freopen("d165.out", "w", stdout);

    string S;
    char K;
    cin >> S >> K;

    int count = 0;
    vector<int> positions;

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == K) {
            count++;
            positions.push_back(i);
        }
    }

    if (count == 0) {
        cout << "Kí tự " << K << " không có trong xâu" << endl;
    } else {
        cout << count << endl;
        for (int pos : positions) {
            cout << pos << " ";
        }
        cout << endl;
    }

    return 0;
}
