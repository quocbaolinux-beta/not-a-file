#include <bits/stdc++.h>
using namespace std;

const int M = 2000000;
vector<bool> p(M + 1, true);

void pre() {
    p[0] = p[1] = false;
    for (int i = 2; i * i <= M; ++i) {
        if (p[i]) {
            for (int j = i * i; j <= M; j += i) {
                p[j] = false;
            }
        }
    }
}

int main() {
    pre();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int c = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = i + 1; j <= n; ++j) {
                for (int k = j + 1; k <= n; ++k) {
                    bool ij = p[i + j];
                    bool ik = p[i + k];
                    bool jk = p[j + k];
                    if ((ij && ik && jk) || (!ij && !ik && !jk)) {
                        c++;
                    }
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}