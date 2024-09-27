#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<bool> p(n + 1, false);
    for (int i = 0; i < 2; ++i) {
        int m;
        cin >> m;
        for (int j = 0; j < m; ++j) {
            int x;
            cin >> x;
            p[x] = true;
        }
    }
    bool ans = true;
    for (int i = 1; i <= n; ++i) {
        if (!p[i]) {
            ans = false;
            break;
        }
    }
    cout << (ans ? "I become the guy." : "Oh, my keyboard!");
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