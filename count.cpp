#include <bits/stdc++.h>
using namespace std;
int demtu(string s)
{
    if (s.empty())
        return 0;

    stringstream ss(s);

    int dem = 0;

    string word;
    while (ss >> word) 
        ++dem;
    return dem;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("count.inp", "r", stdin);
    freopen("count.out", "w", stdout);
    string a;
    cin >> a;
    cout << demtu(a);
    return 0;
}