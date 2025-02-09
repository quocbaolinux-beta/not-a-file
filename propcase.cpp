#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("CAU1.INP", "r", stdin);
    freopen("CAU1.OUT", "w", stdout);
    
    string propCase;
    cin >> propCase;
    
    string joinCase;
    for (char ch : propCase) {
        if (isupper(ch)) {
            if (!joinCase.empty()) {
                joinCase += '_';
            }
            joinCase += tolower(ch);
        } else {
            joinCase += ch;
        }
    }
    
    cout << joinCase << endl;
    
    return 0;
}
