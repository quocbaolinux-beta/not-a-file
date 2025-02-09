#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double a, b;
    cin >> a >> b;

    long double perimeter = 2 * (a + b);
    long double area = a * b;

    cout << fixed << setprecision(2) << "Perimeter: " << perimeter << endl;
    cout << fixed << setprecision(2) << "Area: " << area << endl;

    return 0;
}