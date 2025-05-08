#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n-- && n>=0){
        long long a, b, c;
        cin >> a >> b >> c;
        if(a+b==c) cout << "+" << endl;
        else if(a-b==c) cout << "-" << endl;
        else if(a*b==c) cout << "*" << endl;
        else if(a/b==c) cout << "/" << endl;
        else cout << "NONE" << endl;
    }
    return 0;
}