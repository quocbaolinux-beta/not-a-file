/*
 $$$$$$\                                $$$$$$$\                      $$\       $$\
$$  __$$\                               $$  __$$\                     $$ |      \__|
$$ /  $$ |$$\   $$\  $$$$$$\   $$$$$$$\ $$ |  $$ | $$$$$$\   $$$$$$\  $$ |      $$\ $$$$$$$\  $$\   $$\ $$\   $$\
$$ |  $$ |$$ |  $$ |$$  __$$\ $$  _____|$$$$$$$\ | \____$$\ $$  __$$\ $$ |      $$ |$$  __$$\ $$ |  $$ |\$$\ $$  |
$$ |  $$ |$$ |  $$ |$$ /  $$ |$$ /      $$  __$$\  $$$$$$$ |$$ /  $$ |$$ |      $$ |$$ |  $$ |$$ |  $$ | \$$$$  /
$$ $$\$$ |$$ |  $$ |$$ |  $$ |$$ |      $$ |  $$ |$$  __$$ |$$ |  $$ |$$ |      $$ |$$ |  $$ |$$ |  $$ | $$  $$<
\$$$$$$ / \$$$$$$  |\$$$$$$  |\$$$$$$$\ $$$$$$$  |\$$$$$$$ |\$$$$$$  |$$$$$$$$\ $$ |$$ |  $$ |\$$$$$$  |$$  /\$$\
 \___$$$\  \______/  \______/  \_______|\_______/  \_______| \______/ \________|\__|\__|  \__| \______/ \__/  \__|
     \___|
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;
bool shh(int n){
    if(n<=1) return false;
    int tong=0;
    for(int i=1; i<=n/2; i++){
        if(n%i==0)
            tong +=i;
    }
    return tong == n;
}
bool isprime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int tongcs(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
bool sodep(int k)
{
    if (!isprime(k)) return false;
    int tongchuso = tongcs(k);
    int sqi = sqrt(k);
    return shh(tongchuso) || (sqi * sqi == k);
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    int demsodep = 0;
    for (int num : a) {
        if (sodep(num)) demsodep++;
    }
    cout << demsodep << "\n";
    return 0;
}
