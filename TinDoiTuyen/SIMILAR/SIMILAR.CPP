#include <bits/stdc++.h>
using namespace std;
int l, r, solonnhat[100], sonhonhat[100], tong, hieu;
int tongchuso(int n) {
    int tong = 0;
    while (n > 0) {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SIMILAR.INP", "r", stdin);
    freopen("SIMILAR.OUT", "w", stdout);
    cin >> l >> r;
    for(int i=0; i<=100; i++){
        sonhonhat[i]=1e9;
        solonnhat[i]=-1;
    }
    for(int i=l; i<=r; i++){
        tong=tongchuso(i);
        sonhonhat[tong] = min(sonhonhat[tong], i);
        solonnhat[tong] = max(solonnhat[tong], i);
    }
    hieu=0;
    for(int i=0; i<=100; i++)
    {
        if (solonnhat[i] != -1 && sonhonhat[i] != 1e9) {
            hieu = max(hieu, solonnhat[i] - sonhonhat[i]);
        }
    }
    cout << hieu;
    return 0;
}
