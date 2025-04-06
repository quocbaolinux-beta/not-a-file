#include <bits/stdc++.h>

using namespace std;

bool isvowel(char c){
    string vowels = "aeiouAEIOU";
    return vowels.find(c) != string::npos;
}

int pronunciationTime(const string &word) {
    int count = 0;
    for (char c : word) {
        if (isvowel(c)) count++; 
    }
    return (count > 0) ? count : 1; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int tot=0;
    for(int i = 0; i < n; i++){
        string word; cin >> word;
        tot += pronunciationTime(word);
    }
    cout << tot << endl;
    return 0;
}