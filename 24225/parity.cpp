#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, t;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    for(int i=1; i<=t; i++){
        cin >> n;
        if(n%2==0){
            cout << "even" << endl;
        }
        else if(n%2!=0){
            cout << "odd" << endl;
        }
    }
    return 0;
}