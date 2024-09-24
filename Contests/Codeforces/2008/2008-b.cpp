#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int idx = 0;
    while (idx < n && s[idx] == '1') {
        ++idx;
    }
    if(idx == n) {
        if(n==4) cout << "Yes";
        else cout << "No";
    }
    else {
        if((idx-1) * (idx-1) == n) cout << "Yes";
        else cout << "No";
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