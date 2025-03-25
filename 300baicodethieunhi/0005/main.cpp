#include <iostream>
#include <iomanip>
#define int long long
#define double long double
using namespace std;
double tbc(double a, double b, double c)
{
    return (a+b+c)/3;
}
double a, b, c;
int32_t main()
{
    cin >> a >> b >> c;
    cout << fixed << setprecision(1) << tbc(a,b,c);
    return 0;
}
