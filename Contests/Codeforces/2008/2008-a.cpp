#include<bits/stdc++.h>

using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    // case 1
    // if (a % 2 == 0 && b % 2 == 0) cout << "yes";
    if (a < 1 && b % 2 != 0) {
        cout << "no";
    }
    else if (a % 2 == 0 && b % 2 == 0) {
        cout << "yes";
    }
    else if (a % 2 == 0 && b <= 1) {
        cout << "yes";
    }
    else if (a % 2 == 0 && b % 2 != 0) {
        cout << "yes";
    }
    else if (b-a >= 2 && a % 2 == 0 && b % 2 == 0) {
        cout << "yes";
    }
    else cout << "no";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; ++t) {
        // cout << "Case #" << t << ": ";
        solve();
        cout << endl;
    }
    return 0;
}