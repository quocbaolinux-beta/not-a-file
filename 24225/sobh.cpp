#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a, b, c;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >>a >> b >> c;
    int kq = a+b+c;
    if(kq%2==0){
        cout << kq+1;
        return 0;
    }
    else{
        cout << kq;
        return 0;
    }
}