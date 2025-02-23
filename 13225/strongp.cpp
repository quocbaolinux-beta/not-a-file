#include <bits/stdc++.h>
using namespace std;
int n, can=0; string s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("strongp.inp", "r", stdin);
    freopen("strongp.out", "w", stdout);
    cin >> n >> s;
    bool inhoa = false, inthuong = false, kytu = false, ktdb = false;
    string kytudacbiet = "!@#$%^&*()-+";
    for (char c : s) {
        if (isupper(c)) inhoa = true;
        if (islower(c)) inthuong = true;
        if (isdigit(c)) kytu = true;
        if (kytudacbiet.find(c) != string::npos) ktdb = true;
    }
    if(!inhoa) can++;
    if(!inthuong) can++;
    if(!kytu) can++;
    if(!ktdb) can++;
    cout << can;
    return 0;
}