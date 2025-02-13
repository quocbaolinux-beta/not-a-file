#include <bits/stdc++.h>
using namespace std;
int v, a1, a2, b1, b2, tho, rua;
int tinhngay(int V, int A, int B) {
    if (A >= V) {
        return 1;
    }
    int effectiveHeight = A - B;
    int days = (V - B - 1) / (A - B) + 1;
    return days;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("athorua.inp", "r", stdin);
    freopen("athorua.out", "w", stdout);
    cin >> v >> a1 >> a2 >> b1 >> b2;
    tho = tinhngay(v, a1, b1);
    rua = tinhngay(v, a2, b2);
    if(tho==rua) cout << "HOA";
    else if(tho<rua) cout << "THO";
    else cout << "RUA";
    return 0;
}