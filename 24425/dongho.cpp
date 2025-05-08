#include <bits/stdc++.h>
#define file(n) freopen(n".inp", "r", stdin); freopen(n".out", "w", stdout);
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
using ll = long long;
ll h, m;
int main(){
    io;
    file("dongho");
    cin >> h >> m;
    while(true) {
        int nh=(h/10)*10+(m/10);
        int nm=(h%10)*10+(m%10);
        if(nh<24 && nm<60) {
            cout << h << " " << m;
            break;
        }
        if (++m==60) m=0, ++h;
        if (h==24) h = 0;
    }
    return 0;
}