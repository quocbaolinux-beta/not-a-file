#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    if (str == rev) return true;
    else return false;
}
long long n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    cin >> n;
    for(int i =1; i<=n; i++){
        string s;
        cin >> s;
        if(isPalindrome(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}