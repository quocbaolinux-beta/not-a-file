#include <bits/stdc++.h>
using namespace std;
int a, b;
unsigned long long kq=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b;
    while(b--) kq*=a;
    cout << kq << '\n';
    return 0;
}