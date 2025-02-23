#include <bits/stdc++.h>
//#include <C:\not a file\maubaic++.hpp>
using namespace std;
long double kqtu, kqmau, tich, can, val;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long a, b, c;
    cin >> a >> b >> c;
    kqtu=a+b+c;
    tich=a*b*c;
    can=sqrt(tich);
    kqmau=tich+can;
    val=kqtu/kqmau;
    cout<<val;
    return 0;
}