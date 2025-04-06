#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 10;
ll n, a[N];
map<array<ll, N>, ll> dist;
int bfs()
{
    queue<array<ll, N>> q;
    array<ll, N> bd;
    for(int i = 0; i < n; i++)
        bd[i] = a[i];
    q.push(bd);
    dist[bd] = 0;
    while(!q.empty())
    {
        array<ll, N> cur = q.front();
        q.pop();
        bool zero = true;
        for(int i = 0; i < n; i++)
            if (cur[i] != 0)
            {
                zero = false;
                break;
            }
        if(zero)
            return dist[cur];
        for(int i = 0; i <= n-4; i++)
        {
            array<ll, N> ne = cur;
            ne[i] = abs(cur[i] - cur[i+1]);
            ne[i+1] = abs(cur[i+1] - cur[i+2]);
            ne[i+2] = abs(cur[i+2] - cur[i+3]);
            ne[i+3] = abs(cur[i+3] - cur[i]);
            if (dist.find(ne) == dist.end())
            {
                dist[ne] = dist[cur]+1;
                q.push(ne);
            }
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    n = 5;
    for(ll i = 0; i < n; i++)
        cin >> a[i];
    cout << bfs() << endl;
    return 0;
}