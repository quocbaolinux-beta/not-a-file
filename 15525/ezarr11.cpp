#include <bits/stdc++.h>
using namespace std;
int n;
long long a[100007], x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> x;
    for(int i=1;i<=n; i++){
        cin >> a[i];
    }
    for(int i=1; i<=n; i++){
        if(a[i]==x){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}