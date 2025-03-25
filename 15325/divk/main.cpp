#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, k;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    vector<int>div;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0){
            div.push_back(i);
            if(i != n/i){
                div.push_back(n/i);
            }
        }
    }
    sort(div.begin(), div.end());
    if(k>div.size()){
        cout << -1 << '\n';
    }
    else{
        cout << div[k-1] << '\n';
    }
    return 0;
}
