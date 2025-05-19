#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s;
    return 0;
}