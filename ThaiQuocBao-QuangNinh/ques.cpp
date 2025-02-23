#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("ques.inp", "r", stdin);
    freopen("ques.out", "w", stdout);
    int a, b, c;
    cin >> a >> b >> c;

    int nums[] = {a, b, c};
    sort(nums, nums + 3);

    int d1 = nums[1] - nums[0];
    int d2 = nums[2] - nums[1];
s
    if (d1 == d2) {
        cout << nums[0] - d1 << " " << nums[2] + d1 << endl;
    } else if (d1 < d2) {
        cout << nums[1] + d1 << endl;
    } else {
        cout << nums[1] - d2 << endl;
    }

    return 0;
}
