#include <bits/stdc++.h>
using namespace std;
int n, dema=0, demb=0;
const int MAXN=1e6+1;
char c[MAXN];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> c[i];
    }
    for(int i=2; i<=n; i++){
        if(c[i-1]=='A'&&(c[i]=='A'||c[i]=='*')) dema++;
        else if(c[i-1]=='*'&&(c[i]=='A'||c[i]=='*')) dema++;
    }
    for(int i=2; i<=n; i++){
        if(c[i-1]=='B'&&(c[i]=='B'||c[i]=='*')) demb++;
        else if(c[i-1]=='*'&&(c[i]=='B'||c[i]=='*')) demb++;
    }
    cout << max(dema,demb);
    return 0;
}