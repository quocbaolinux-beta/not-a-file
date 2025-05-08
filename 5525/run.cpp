#include <bits/stdc++.h>
using namespace std;
long long d, x, y, t;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> d >> x >> y;
    t = d/(x-y)+1;
    cout << t << '\n';
    return 0;
}