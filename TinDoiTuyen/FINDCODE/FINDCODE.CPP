#include <bits/stdc++.h>
using namespace std;
long long x,i;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("FINDCODE.INP", "r", stdin);
    freopen("FINDCODE.OUT", "w", stdout);

    long long n;
    cin >> n;

    set<long long>s;
    for(i=1;i<=n;i++){
        cin>>x;
    s.insert(x);
    }
    long long res;
    res=1;
    while(s.count(res)){
        res++;
    }
    cout<<res<<endl;
    return 0;
}
