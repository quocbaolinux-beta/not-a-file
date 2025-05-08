#include <bits/stdc++.h>
using namespace std;
long long n, i, tong=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(i=1; i<n; i+=2){
        tong+=i-(i+1);
    }
    cout << tong;
    return 0;
}