#include <bits/stdc++.h>
using namespace std;
void solve();
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t=1; 
    cin>>t; 
    while(t--) 
    { 
        solve(); 
        cout<<"\n"; 
    } 
    return 0;
}

void solve() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int win=0;

    win += 2 * ((a1 >= b1 && a2 > b2) || (a1 > b1 && a2 >= b2));
    win += 2 * ((a1 >= b2 && a2 > b1) || (a1 > b2 && a2 >= b1));

    cout << win;
}