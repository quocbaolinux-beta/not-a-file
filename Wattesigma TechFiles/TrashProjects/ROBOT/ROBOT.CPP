#include<bits/stdc++.h>
using namespace std;
#define ll long long
template<class T, class P>
bool minimize(T &a, P b)
{
    if ( a > b )
        return a = b , true ;
    return false ;
}
//
const int Max = (int) 1e6;
int a, b, sumx, sumy, n;
//
int dp[Max+1];
int check(){
    cin >> a >> b ;
    memset( dp, 0x3f, sizeof dp);

    dp[1]=0;
    for(int i=2;i<=n;i++){
        if(i-a>=0) minimize(dp[i],dp[i-a]+1);
        if(i-b>=0) minimize(dp[i],dp[i-b]+1);
    }
    return (dp[n]>1000000) ? 0 : dp[n];
}
int main ()
{
    ios_base::sync_with_stdio(0) ;
    cin.tie(NULL);cout.tie(NULL);
    freopen("ROBOT.INP", "r", stdin);
    freopen("ROBOT.OUT", "w", stdout);
    cin >> n ;
    if(n==1) return cout << 0 , 0 ;
    sumx = check() ;
    sumy = check() ;
    if(sumx * sumy==0) return cout << -1 , 0 ;
    return cout << sumx + sumy , 0 ;
}
