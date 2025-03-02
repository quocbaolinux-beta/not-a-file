#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("TICKETS.INP", "r", stdin);
    freopen("TICKETS.OUT", "w", stdout);

    long long n, k, p1, p2;
    cin >> n >> k >> p1 >> p2;

    long long minCost = LLONG_MAX;

    for (long long i = 0; i <= (n / k); i++) {
        long long remainingTickets = n - (i * k);
        long long cost = (i * p2) + (remainingTickets * p1);
        minCost = min(minCost, cost);
    }

    cout << minCost << endl;

    return 0;
}
