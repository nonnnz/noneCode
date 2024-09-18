#include<bits/stdc++.h>

using namespace std;

const string VOL = "aeiou";

void solve() {
    int n;
    cin >> n;

    vector<int> a(5, n/5);
    for (int i = 0; i < n%5; ++i) {
        a[i]++;
    }
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < a[i]; ++j)
            cout << VOL[i];
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