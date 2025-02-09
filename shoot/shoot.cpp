#include <bits/stdc++.h>
using namespace std;
const int N = 32;
int n, res;

void backTrack(int id, bool prevWin, bool consecWin) {
	if (id > n) {
		if (consecWin == true) res++;
		return;
	}
	if (id == 1 || prevWin == true) backTrack(id+1, 0, consecWin);
	backTrack(id+1, 1, consecWin || prevWin == true);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    freopen("shoot.inp", "r", stdin);
    freopen("shoot.out", "w", stdout);
	cin >> n;
    backTrack(1, 0, 0);

	cout << res;

	return 0;
}
