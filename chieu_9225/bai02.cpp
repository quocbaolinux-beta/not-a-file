#include <bits/stdc++.h>
using namespace std;

int p, q;

int reverse_number(int n) {
    int res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);

    //freopen("bai02.inp", "r", stdin);
    //freopen("bai02.out", "w", stdout);

    cin >> p >> q;
    bool a[100001]={true, true};
    for(int i=2; i<=316; i++)
    {
        if(a[i]==false)
        {
            for(int j=i*i; j<=100000; j+=i)
            {
                a[j]=true;
            }
        }
    }
    for(int i=p; i<=q; i++)
    {
        int d=reverse_number(i);
        if(a[d]==false)
        {
            cout << i << endl;
        }
    }
    return 0;
}