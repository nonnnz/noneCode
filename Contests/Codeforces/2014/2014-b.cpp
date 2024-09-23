#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    if(((n+1)*n/2 - (n-k)*(n-k+1)/2)%2) cout << "no";
    else cout << "yes";
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