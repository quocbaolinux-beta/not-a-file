#include <bits/stdc++.h>
using namespace std;

void print(int h) {
    if(h < 10) cout << 0 << h;
    else cout << h;
}

int main() {
    freopen("NGIAY.INP", "r", stdin);
    freopen("NGIAY.OUT", "w", stdout);
    int n; cin >> n;    
    int h = (n / 3600) % 24;
    int m = ((n % 3600) / 60) % 60;
    int s = ((n % 3600) % 60);
    print(h);
    cout << ":";
    print(m);
    cout << ":";
    print(s);
    return 0;
}