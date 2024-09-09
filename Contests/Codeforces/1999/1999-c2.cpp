#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, s, m;
    cin >> n >> s >> m;
    int lr[n+1][2];
    bool ans = false;
    lr [0][0] = 0; lr[0][1] = 0;
    for(int i = 1; i < n+1; ++i) {
        cin >> lr[i][0] >> lr[i][1];
    }
    if(m - lr[n][1] >= s) {
        cout << "YES";
        return;
    }
    for(int i = 1; i < n+1; ++i) {
        if(lr[i][0] - lr[i-1][1] >= s) {
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