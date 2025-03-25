#include <bits/stdc++.h>
using namespace std;
double t;
int main()
{
    cin >> t;
    if(t>9.0) cout << "VERY TOXIC" << endl;
    else if(t<=9.0) cout << "TOXIC" << endl;
    else if(t<5.0) cout << "SAFE" << endl;
    return 0;
}
