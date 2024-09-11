#include<bits/stdc++.h>

using namespace std;

void solve() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    // a = 2; b = 4; c = 5; d = 5; e = 4; f = 3;
    int x1, y1, x2, y2, x3, y3;
    // // given
    // a = (x1+x2)/2;
    // b = (y1+y2)/2;
    // c = (x2+x3)/2;
    // d = (y2+y3)/2;
    // e = (x3+x1)/2;
    // f = (y3+y1)/2;
    // // find x1
    // // a - c
    // a - c = (x1-x3)/2
    // // a- e
    // a - c - e = x1
    // // find x2
    // // c - e
    // c - e = (x2-x1)/2
    // // a + c - e
    // a + c - e = (x1+x2)/2 + (x2-x1)/2 => 2*x2/2 => x2
    // // find x3
    // e = (x3+(a - (c - e)))/2; => 2*e = x3 + a - c + e => x3 = a - c + e-2e
    // therefore
    x1 = a - (c - e);
    x2 = a + (c - e);
    x3 = - a + c + e;
    y1 = b - (d - f);
    y2 = b + (d - f);
    y3 = - b + d + f;
    cout << x1 << " " << y1 << endl;
    cout << x2 << " " << y2 << endl;
    cout << x3 << " " << y3;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; ++t) {
        // cout << "Case #" << t << ": ";
        solve();
        cout << endl;
    }
    return 0;
}