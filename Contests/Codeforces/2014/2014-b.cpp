#include<bits/stdc++.h>

using namespace std;

void solve() {
    long long int n, k;
    cin >> n >> k;
    if(n % 2 == 0) cout << "yes";
    else if(k % 2 == 0) cout << "yes";
    else cout << "no";
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