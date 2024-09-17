#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, q;
    cin >> n >> m >> q;
    int b1, b2, a1;
    cin >> b1 >> b2 >> a1;

    if(b1 > b2) swap(b1, b2);

    if(a1 < b1) {
        cout << b1 - 1;
    }
    else if(a1 > b2) {
        cout << n - b2;
    }
    else cout << (b2 - b1) / 2;
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