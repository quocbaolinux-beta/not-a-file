#include <bits/stdc++.h>
using namespace std;
int a,b,c,d;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> c;
    for(d=1; d<=100; d++)
    {
        if(c-b*d==b*d-a)
        {
            cout << d << endl;
            return 0;
        }
    }
    return 0;
}
