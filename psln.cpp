#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d, maxn=0, maxd=1;
long long sos[4]={a, b, c, d};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c >> d;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i != j) { 
                long long n = sos[i];
                long long de = sos[j];
                if (n >= de) {
                    if (n * maxd > maxn * de) {
                        maxn = n;
                        maxd = de;
                    }
                }
            }
        }
    }
    cout << maxn << "/" << maxd;
    return 0;
}       