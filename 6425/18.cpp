#include <bits/stdc++.h>
using namespace std;
int n;
bool checkprime(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}
int main(){
    cin >> n;
    if (checkprime(n)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
