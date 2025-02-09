#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    double semi_perimeter = (a + b + c) / 2.0;

    cout << fixed << setprecision(2) << semi_perimeter << endl;

    return 0;
}