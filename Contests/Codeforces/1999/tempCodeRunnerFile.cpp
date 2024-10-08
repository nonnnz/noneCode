#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, s, m;
    cin >> n >> s >> m;
    vector<pair<int, int>> lr(n+1);
    bool ans = false;
    lr[0].first = 0; lr[0].second = 0;
    for(int i = 1; i < n+1; ++i) {
        cin >> lr[i].first >> lr[i].second;
    }
    if(m - lr[n].second >= s) {
        cout << "YES";
        return;
    }
    for(int i = 1; i < n+1; ++i) {
        if(lr[i].first - lr[i-1].second >= s) {
            ans = true;
            break;
        }
    }
    
    cout << (ans ? "YES" : "NO");
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; ++t) {
        // cout << "Case #" << t << ": ";
        solve();
        cout << '\n';
    }

    return 0;
}