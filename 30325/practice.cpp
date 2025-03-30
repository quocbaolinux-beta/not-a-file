#include <bits/stdc++.h>
using namespace std;

int n, c, solved;
vector<pair<int, int>> pb;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("PRACTICE.INP", "r", stdin);
    freopen("PRACTICE.OUT", "w", stdout);
    
    cin >> n >> c;
    pb.resize(n);
    for (auto &x : pb) 
        cin >> x.first >> x.second;
    
    sort(pb.begin(), pb.end());
    
    for (auto [a, b] : pb) {
        if (c >= a) {
            c += b;
            solved++;
        }
    }
    
    cout << solved << "\n";
    return 0;
}
