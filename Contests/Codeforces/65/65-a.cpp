#include<bits/stdc++.h>

using namespace std;

void solve() {
    char s[101];
    cin >> s;
    int n = strlen(s);
    if(n < 11) {
        cout << s;
        return;
    }
    cout << s[0] << n - 2 << s[n - 1];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; ++t) {
        // cout << "Case #" << t << ": ";
        solve();
        cout << endl;
    }
    return 0;
}