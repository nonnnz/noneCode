#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> b(m);
    for(int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    sort(b.begin(), b.end());

    for(int i = 0; i < q; ++i) {
        int a;
        cin >> a;
        int idx = upper_bound(b.begin(), b.end(), a) - b.begin();
        if(idx == 0) cout << b[0] - 1;
        else if(idx == m) cout << n - b[m - 1];
        else cout << (b[idx] - b[idx - 1]) / 2;
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; ++t) {
        solve();
        // cout << endl;
    }
    return 0;
}