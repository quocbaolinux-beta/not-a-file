#include <bits/stdc++.h>
using namespace std;
int tongchuso(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
bool sodacbiet(int n) {
    int s = tongchuso(n);
    return n % s == 0;
}
int n, a[100000], q, l, r;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("bai2.inp", "r", stdin);
    freopen("bai2.out", "w", stdout);
    cin >> n >> q;
    for(int i = 1; i <= n; i++) 
        cin >> a[i];
    for (int i = 1; i <= q; i++){
        cin >> l >> r;
        int sc = 0;
        for (int j = l - 1; j < r; ++j) {
            if (sodacbiet(a[j])) {
                sc++;
            }
        }
        cout << sc << endl;
    }
    return 0;
}