#include <bits/stdc++.h>
using namespace std;
int n;
const int N=1001;
vector<int>a(N);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    cout << a[1] << endl << a[n];
    return 0;
}