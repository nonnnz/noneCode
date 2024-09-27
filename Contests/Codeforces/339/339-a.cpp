#include<bits/stdc++.h>

using namespace std;

void solve2() {
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

void solve() {
    char s[1000];
    cin >> s;
    int n = strlen(s);
    int a[3] = {0};
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            ++a[0];
        } else if (s[i] == '2') {
            ++a[1];
        } else if (s[i] == '3') {
            ++a[2];
        }
    }
    for(int i = 0; i <= n - 1; i += 2) {
        if(a[0] > 0) {
            cout << "1";
            --a[0];
        } else if(a[1] > 0) {
            cout << "2";
            --a[1];
        } else {
            cout << "3";
            --a[2];
        }
        if(i < n - 1) cout << "+";
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