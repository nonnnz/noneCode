#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> b(m);
    for(int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    // vector<int> a(n, 0);
    vector<int> a(q);
    
    // a[st - 1] = 1;
    // int min = b[0];
    cout << min(abs(st - b[0]), abs(st - b[1]));
}

    

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; ++t) {
        solve();
        cout << endl;
    }
    return 0;
}