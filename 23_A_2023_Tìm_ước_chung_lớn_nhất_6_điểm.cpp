#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;
int n, cnt[N+1], ex[N+1];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("cdiv.inp", "r", stdin);
    freopen("cdiv.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x; 
        cin >> x;
        
		ex[x]++;
	}

	for (int i = 1; i <= N; i++) {
		for (int j = i; j <= N; j += i) {
			cnt[i] += ex[j];
        }
    }

	for (int i = N; i >= 1; i--) {
		if (cnt[i] >= 2) {
			cout << i;
			break;
		}
    }

	return 0;
}
