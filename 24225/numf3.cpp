#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    string nstr = to_string(n);
    char thirdDigit = nstr[2];
    cout << thirdDigit << endl;
    return 0;
}