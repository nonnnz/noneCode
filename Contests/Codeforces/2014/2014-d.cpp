#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, d, k;
    cin >> n >> d >> k;
    
    vector<pair<int, int>> a(k);
    for(int i = 0; i < k; ++i) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());


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