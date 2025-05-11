#include <bits/stdc++.h>
using namespace std;

int tongcs(int n){
    int tong=0;
    while(n!=0){
        tong+=n%10;
        n/=10;
    }
    return tong;
}
int main(void){
    int n;
    cin >> n;
    cout << tongcs(n);
    return 0;
}