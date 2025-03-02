#include <bits/stdc++.h>
using namespace std;
char a;
main()
{
    cin >> a;
    if(a=='A') cout << "z" << endl;
    else{
        char pa=tolower(a-1);
        cout << pa << endl;
    }
    return 0;
}