#include <bits/stdc++.h>
using namespace std;
double x;
int main()
{
    cin >> x;
    double res = sin(x);
    cout << "sin("<< x <<") = " << fixed << setprecision(2) << res;
}