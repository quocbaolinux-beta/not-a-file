#include <bits/stdc++.h>
using namespace std;
int m, n, k, q, u1, v1, u2, v2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> m >> n >> k >> q;
    int x[k]; int y[k];
    for (int i = 0; i < k; i++) cin >> x[i] >> y[i];
    for (int i = 0; i < q; i++){
        cin >> u1 >> v1 >> u2 >> v2;
        int cnt = 0;
        for (int j = 0; j < k; j++){
            if (x[j] >= u1 && x[j] <= u2 && y[j] >= v1 && y[j] <= v2) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}