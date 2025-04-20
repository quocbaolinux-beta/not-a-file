#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    double A = 0;
    for (int i = 1; i <= 2 * n - 1; i++) {
        A += (double)i/(i + 5);
    }

    double B = 0, p = 1;
    for (int i = 1; i <= 2 * n + 1; i++) {
        p = (double) p / 7;
        if (i % 2 == 1)
            B += ((double) i * p);
        else 
            B -= ((double) i * p);
    }
    
    cout << fixed << setprecision(5) << A << '\n' << B << '\n';

    return 0;
}
