#include <bits/stdc++.h>
#define file(name) freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout);
using namespace std;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    file("CCIH");
    getline(cin, s);
    for(char &c:s){
        if(islower(c)) c = toupper(c);
    }
    cout << s << endl;
    return 0;
}