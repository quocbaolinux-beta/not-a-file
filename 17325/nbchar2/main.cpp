#include <bits/stdc++.h>
using namespace std;
char a, given_char; long long n;
int main()
{
    cin >> a >> n;
    char res = 'A' + (given_char - 'a' + n) % 26;
    cout << res;
    return 0;
}
