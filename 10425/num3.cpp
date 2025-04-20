#include <bits/stdc++.h>
using namespace std;
long long n;
long long demcs(long long n){
    long long dem = 0;
    while (n > 0) {
        n /= 10;
        dem++;
    }
    return dem;
}
long long tongcs(long long n){
    long long tong = 0;
    while (n > 0) {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}   
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cin >> n;
    cout << fixed << setprecision(2)<< (double)tongcs(n) / demcs(n) << "\n";
    return 0;
}