#include <bits/stdc++.h>
#define bl bool
#define ll long long
using namespace std;
int t;
bl xk(string s){
    int n=s.size();
    if(n%2!=0) return false;
    for(int i=0; i<n/2; i++){
        if(s[i]!=s[i+n/2]) return false;
    }
    return true;
}
bl check(string s){
    if(xk(s)) return true;
    for(int i=0; i<s.size(); i++){
        string tmp=s;
        tmp.erase(i,1);
        if(xk(s)) return true;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while(t--){
        string s;
        cout << (check(s)?"YES":"NO");
    }
    return 0;
}