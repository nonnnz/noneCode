#include<bits/stdc++.h>

using namespace std;

void solve() {
    long long int n, m, a;
    cin >> n >> m >> a;
    long long ans = (n + a - 1) / a * ((m + a - 1) / a);
    cout << ans;
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