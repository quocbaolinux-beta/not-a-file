#include <bits/stdc++.h>
#define file(name) freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout);
#define int long long
#define double long double
using namespace std;
int a, b, c, k, x, y;
int A[1000];
int d[1000];
void cala(){
    int n = 0;
    while (a > 0)
    {
        int p = a % 10;
        a /= 10;
        n++;
        A[n] = p;
    }

    for (int i = 1; i <= 100; i++)
    {
        int phu = A[i] * b + d[i];
        d[i] = 0;
        A[i] = phu % 10;
        phu /= 10;
        int j = i;
        while (phu > 0)
        {
            j++;
            int p = phu % 10;
            phu /= 10;
            d[j] += p;
        }
    }

    for (int i = 1; i <= 100; i++)
    {
        int phu = A[i] * c + d[i];
        A[i] = phu % 10;
        phu /= 10;
        int j = i;
        while (phu > 0)
        {
            j++;
            int p = phu % 10;
            phu /= 10;
            d[j] += p;
        }
    }

    for (int i = 100; i >= 1; i--)
        if (A[i] != 0)
    {
        n = i;
        break;
    }

    for (int i = n + 5; i > 5; i--)
        {
            A[i] = A[i - 5]; 
            A[i - 5] = 0;
        }

    int giatri = 0;
    for (int i = n + 5; i >= 0; i--)
    {
        giatri *= 10;
        giatri += A[i];
        A[i] = 0;
        if (giatri >= k)
        {
            A[i] = giatri / k;
            giatri = giatri % k;
        }
    }

    for (int i = n + 5; i >= 0; i--)
        if (A[i] != 0)
        {
            n = i;
            break;
        }
    int q = 0;
    if (A[0] >= 5)
        q = 1;

    for (int i = 1; i <= n; i++)
        {
            A[i] += q;
            q = 0;
            if (A[i] == 10)
                {
                    A[i] = 0;
                    q = 1;
                }

            if (q == 0)
                break;
        }

    if (q == 1)
    {
        n++;
        A[n] = 1;
    }

    for (int i = n; i > 5; i--)
        cout << A[i];
    cout << ".";
    for (int i = 5; i >= 1; i--)
        cout << A[i];
    cout << "\n";

}
int calb(int x, int y){
    int B = 0;
    for(int i = 1; i <= y; i++){
        B*=((x+i)%2020);
    }
    return B;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    file("bai2");
    cin >> a >> b >> c >> k >> x >> y;
    cala();
    cout << calb(x, y) << '\n';
    return 0;
}