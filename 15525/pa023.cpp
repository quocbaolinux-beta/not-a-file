#include <bits/stdc++.h>
using namespace std;
int x, y;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> x >> y;
    if(x>y) cout<<x*x;
    else if(x==y) cout << x+y;
    else cout<<y*y;
    return 0;
}