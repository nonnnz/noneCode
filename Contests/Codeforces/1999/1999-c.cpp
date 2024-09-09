#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, s, m;
    cin >> n >> s >> m;
    int l=0, r=0, l_t, r_t;
    bool ans = false;
    for(int i = 0; i < n; ++i) {
        cin >> l_t >> r_t;
        if(l_t - r >= s) ans = true;

        //update
        l = l_t;
        r = r_t;

        if(i == n-1 && m - r >= s) ans = true;
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