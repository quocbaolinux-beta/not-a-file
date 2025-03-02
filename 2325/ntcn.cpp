#include <bits/stdc++.h>
#define int long long

using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] > 1 && arr[j] > 1 && gcd(arr[i], arr[j]) == 1) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}