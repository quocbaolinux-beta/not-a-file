#include <bits/stdc++.h>
using namespace std;

void rotate1(int a[3][4]) {
    int temp = a[1][1];
    a[1][1] = a[2][1];
    a[2][3] = a[1][3];
    a[1][3] = a[1][2];
    a[1][2] = temp;
}

void rotate2(int a[3][4]) {
    int temp = a[1][2];
    a[1][2] = a[1][3];
    a[2][2] = a[1][2];
    a[3][2] = a[2][2];
    a[1][3] = temp;
}
int main() {
    int a[3][4];
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 4; j++)
            cin >> a[i][j];

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int type;
        cin >> type;
        if (type == 1) rotate1(a);
        else if (type == 2) rotate2(a);
    }

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 4; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}
