#include <bits/stdc++.h>
using namespace std;
int n,x, counteven=0;
const int N=1001;
vector<int>a(N);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> x;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=1; i<=n; i++){
        if(a[i]%2==0){
            counteven++;
        }
        if(counteven==x){
            break;
        }
        cout << a[i] << ' ';
    }

    return 0;
}