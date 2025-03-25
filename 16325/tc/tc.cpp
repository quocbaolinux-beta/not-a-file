#include <bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

const int N = 1e6;
bool E[N+1];

vector<int> primes;
void sieve() {
	E[0] = E[1] = 1;
	for (int i = 2; i <= N; i++)
		if (!E[i]) {
			primes.pb(i);
			for (int j = i*i; j <= N; j += i)
				E[j] = 1;
		}
}

int32_t main() {
	sieve();

	int n;
	while (cin >> n) {
		int res = 1;
		for (int p : primes) {
			if (p > n) break;


			if (p == 2 || p == 5) continue;


			int mx = p;
			while (mx * p <= n) {
                mx *= p;
            }

			res = (res * mx) % 10;
		}


		int cnt2 = 0, val2 = 1;
		while (val2 * 2 <= n) {
			cnt2++;
			val2 *= 2;
		}
        int val5 = 1;
		while (val5 * 5 <= n) {
			cnt2--;
			val5 *= 5;
			val2 /= 2;
		}

		res = (res * val2) % 10;
		cout << res << "\n";
	}

	return 0;
}

