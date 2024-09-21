#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    bool zero = false;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] == 0) zero = true;
    }
    if(!zero) {
        cout << 0;
        return;
    }
    // max sort
    // sort(a.begin(), a.end(), greater<int>());
    // cout << a[0] << endl;
    long long int count = 0, balance = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i] >= k) balance += a[i];
        if(balance > 0 && a[i] == 0) {
            balance--;
            count++;
        }
    }
    cout << count;
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