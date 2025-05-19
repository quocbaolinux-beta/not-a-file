#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> c;
    if(a+b>c&&a+c>b&&b+c>a){
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
            cout << "VUONG" << endl;
        }else{
            cout << "CO" << endl;
        }
    }else{
        cout << "KHONG" << endl;
    }
    return 0;
}