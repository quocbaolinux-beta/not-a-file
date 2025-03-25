#include <iostream>
#include <fstream>
#include <iomanip>
#define ll long long
using namespace std;
ll a;
int main()
{
    std::cin >> a;
    std::cout << std::fixed << setprecision(2) << a*2*3.14 << " " << a*a*3.14 << endl;
    return 0;
}
