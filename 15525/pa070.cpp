#include <bits/stdc++.h>
using namespace std;

string rev(string s){
    reverse(s.begin(), s.end());
    return s;
}
int main(){
    string s;
    cin >> s;
    cout << rev(s);
    return 0;
}