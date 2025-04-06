#include <bits/stdc++.h>

#define int long long 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define vi vector<int>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int n;
vi a(n);
int32_t main(){
    fastio;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(all(a));
    int count = 0;
    for(int k=2; k<n; k++){
        int i = 0, j = k-1;
        while(i < j){
            if(a[i] + a[j] > a[k]){
                count += j - i;
                j--;
            }
            else if(a[i] + a[j] <= a[k]){
                i++;
            }
            else{
                j--;
            }
        }
    }
    cout << count << endl;
    return 0;
}