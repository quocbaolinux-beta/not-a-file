#include <bits/stdc++.h>
using namespace std;
string s;
int i;
bool rev(string s)
{
    for(int i=0; i<s.size()/2; i++)
    {
        if(s[i]!=s[s.size()-1-i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("bai04.inp", "r", stdin);
    //freopen("bai04.out", "w", stdout);
    unordered_map<string, int> a;
    int c=0, d=0;
    while(cin >> s)
    {
        a[s]++;
        if(rev(s))
        {
            d++;
        }
    }
    for(auto i : a)
    {
        if(i.second==1)
        {
            c++;
        }
    }
    cout << c << endl << d;
    return 0;
}