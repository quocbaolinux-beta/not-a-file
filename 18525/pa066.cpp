#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s){
    int n=s.length();
    for(int i=0; i<n/2; i++){
        if(s[i]!=s[n-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    if(ispalindrome(s)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}