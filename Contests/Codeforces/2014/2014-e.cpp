#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, h;
    cin >> n >> m >> h;

    vector<int> horse(h);
    for(int i = 0; i < h; ++i) {
        cin >> horse[i];
    }

    vector<pair<int, int>> adj[n];
    for(int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<long long> dist_r(n + 1, LLONG_MAX);
    // vector<long long> dist_m(n, LLONG_MAX);
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; ++t) {
        solve();
        cout << endl;
    }
    return 0;
}