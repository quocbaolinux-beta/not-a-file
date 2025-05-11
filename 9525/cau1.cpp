#include <bits/stdc++.h>
using namespace std;
long long n, ans=0, len=1,cnt=9, dig;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("CAU1.INP", "r", stdin);
    freopen("CAU1.OUT", "w", stdout);
    cin >> n;
    while(n>0){
        dig=cnt*len;
        if(n>dig){
            n-=dig;
            ans+=cnt;
            len++;
            cnt*=10;
        }else{
            if(n%len!=0){
                ans=0;
            }else{
                ans+=n/len;
            }
            n=0;
        }
    }
    cout << ans << endl;
    return 0;
} 