#include <bits/stdc++.h>
#define file(name) freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout);
using namespace std;
long long a, b, dem=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    file("subnum");
    cin >> a >> b;
    while(a!=b){
        if(a>b){
            dem+=a/b;
            a%=b;
            if(a==0) dem--; 
        }
        else{
            dem+=b/a;
            b%=a;
            if(b==0) dem--;
        }
    }
    cout << dem << endl;
    return 0;
}