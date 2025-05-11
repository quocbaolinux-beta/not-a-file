#include <bits/stdc++.h>
using namespace std;
int n, tong=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++){
        tong+=i;
    }
    cout << tong;
    return 0;
}