#include <bits/stdc++.h>
using namespace std;
long long x[100001], y[100001], n, i, j;
long double kcmax, kc, a, b, c, d, e, f, xmax, xmin, ymax, ymin;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("DISTANCE.INP", "r", stdin);
    freopen("DISTANCE.OUT", "w", stdout);
    cin >> n;
    for (i=1; i<=n; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }
    kcmax=0;
    if(ymin==0 && ymax==0)
        kcmax = xmax-xmin;
    else
    {
        if (xmin==0 && xmax==0)
            kcmax = ymax-ymin;
        else
        {
            a=sqrt((xmin-0)*(xmin-0)+(0-ymax)*(0-ymax));
            b=sqrt((xmax-0)*(xmax-0)+(0-ymax)*(0-ymax));
            c=sqrt((xmax-0)*(xmax-0)+(0-ymin)*(0-ymin));
            d=sqrt((xmin-0)*(xmin-0)+(0-ymin)*(0-ymin));
        }
    }
    cout << fixed << setprecision(5) << kcmax << endl;
    return 0;
}
