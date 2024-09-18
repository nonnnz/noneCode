#include<bits/stdc++.h>

using namespace std;

void solve(string &s, int n) {
    string t;
    cin >> t;
    int m = t.size();
    int ans = 21, cnt = 0, st, e;
    for (int i = 0; i < n; ++i) {
        cnt = 0;
        for (int j = i; j < n; ++j) {
            if(s[j] == t[cnt]) {
                if(cnt == 0) st = j;
                cnt++;
            }
            if(cnt == m) {
                ans = min(ans, (j - st) - m);
            }
        }
    }
    cout << (ans == 21 ? -1 : ans + 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size();
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; ++t) {
        solve(s, n);
        cout << endl;
    }
    return 0;
}