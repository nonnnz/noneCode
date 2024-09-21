#include<bits/stdc++.h>

using namespace std;

void solve() {
    long long int n;
    cin >> n;
    long long int x, y;
    cin >> x >> y;
    if(y < x) {
        cout << (n + y - 1) / y << endl;
    }
    else {
        cout << (n + x - 1) / x << endl;
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