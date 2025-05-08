#include <bits/stdc++.h>
using namespace std;
int a, b, tong = 0;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b;
    for(int i=a; i<=b; i++){
        if(i%13!=0) tong+=i;
    }
    cout << tong;
    return 0;
}
