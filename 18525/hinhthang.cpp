#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    double a, b, h;
    cin >> a >> b >> h;
    cout << fixed << setprecision(3) << (a+b)/2*h << endl;
    return 0;
}