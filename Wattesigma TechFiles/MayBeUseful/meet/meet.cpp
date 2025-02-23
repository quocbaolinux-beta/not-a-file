#include <bits/stdc++.h>
using namespace std;
int maxStudents(const string activities) {
    int count = 0;
    int max_count = 0;

    for (char c : activities) {
        if (c == '+') {
            count++;
        } else if (c == '-') {
            count--;
            if (count < 0) {
                return -1;
            }
        }
        max_count = max(max_count, count);
    }

    return max_count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); freopen("meet.inp", "r", stdin); freopen("meet.out", "w", stdout);
    string hd;
    cin >> hd;
    cout << maxStudents(hd);
    return 0;
}
