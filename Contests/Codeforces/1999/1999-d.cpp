#include<bits/stdc++.h>

using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;
    int j=0;
    
    for(int i = 0; i < (int)s.size(); ++i) {
        if(s[i] == '?') {
            if(j < (int)t.size()) s[i] = t[j++];
            else s[i] = 'a';
        } else if (s[i] == t[j]) ++j;
    }
    if(j >= (int)t.size()) cout << "YES\n" << s;
    else cout << "NO";
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