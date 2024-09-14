#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> b(m);
    for(int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    vector<int> a(n, 0);
    int st;
    for(int i = 0; i < q; ++i) {
        cin >> st;
        a[st - 1] = 1;
    }
    // base case
    if(st >= b[0] && st <= b[1]) {
        if(st - b[0] > 1 || b[1] - st > 1) st = (b[0] + b[1]) / 2;
        cout << min(abs(st - b[0]), abs(st - b[1]));
    }
    else if(st < b[0]) {
        cout << abs(st - b[0])+(st-1);
    }
    else if(st > b[1]) {
        cout << abs(st - b[1])+(n-st);
    }
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