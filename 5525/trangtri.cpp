#include <bits/stdc++.h>
using namespace std;
//trangtri
long long n,i,tien; int x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> x;
    for(i=1; i<=n; i+=2){
        tien+=x;
    }
    cout << tien << endl;
    return 0;
}