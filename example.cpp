#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("EXAMPLE.INP", "r", stdin); 
    freopen("EXAMPLE.OUT", "w", stdout); 

    int N;
    cin >> N; 
    vector<pair<int, int>> tasks(N); 

    for (int i = 0; i < N; i++) {
        int s, e;
        cin >> s >> e;
        tasks[i] = {e, s}; 
    }

    sort(tasks.begin(), tasks.end()); 

    int dem = 0;
    int let = 0;

    for (const auto& task : tasks) {
        if (task.second >= let) {
            dem++;
            let = task.first;
        }
    }

    cout << dem << endl; 

    return 0;
}