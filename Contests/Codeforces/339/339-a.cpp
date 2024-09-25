#include<bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != '+') {
            v.push_back(s[i] - '0');
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i];
        if (i < v.size() - 1) {
            cout << '+';
        }
    }
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