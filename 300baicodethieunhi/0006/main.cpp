#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double a,b,c, p;
int main()
{
    cin >> a >> b >> c;
    p=(a+b+c)/2;
    cout << fixed << setprecision(1) << a+b+c << " " << setprecision(3) << sqrt(p*(p-a)*(p-b)*(p-c));
    return 0;
}
