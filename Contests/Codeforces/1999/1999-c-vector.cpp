#include<bits/stdc++.h>

using namespace std;

#define FOR(i, start, end) for(int i = (start); i <= (end); ++i)

#define YES cout << "YES"
#define NO cout << "NO"

void solve() {
    int n, s, m;
    cin >> n >> s >> m;
    vector<pair<int, int>> lr(n+1);
    lr[0] = {0, 0};
    FOR(i, 1, n) cin >> lr[i].first >> lr[i].second;
    if (lr[1].first >= s) {
        YES;
        return;
    }
    if(m - lr[n].second >= s) {
        YES;
        return;
    }
    FOR(i, 1, n) {
        if(lr[i].first - lr[i-1].second >= s) {
            YES;
            return;
        }
    }
    NO;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
        cout << '\n';
    }
    return 0;
}