#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    for(int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        vector<int> b(a.begin() + l - 1, a.begin() + r);
        sort(b.begin(), b.end(), greater<int>());

        int sum_r = 0;
        int sum_s = 0;
        
        for(int i = 0; i < b.size(); ++i) {
            if(i % 2 == 0) {
                sum_r += b[i];
            }
            else {
                sum_s += b[i];
            }
        }
        cout << (sum_s >= sum_r ? "yes":"no") << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; ++t) {
        solve();
        cout << endl;
    }
    return 0;
}