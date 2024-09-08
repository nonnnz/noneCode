#include <bits/stdc++.h>

using namespace std;

void solve() {
    // char n[2];
    // cin >> n[0] >> n[1];
    // cout << (n[0] - '0') + (n[1] - '0');
    int n;
    cin >> n;
    cout << (n/10) + (n%10);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t=1; 
        cin>>t; 
        while(t--) 
        { 
            solve(); 
            cout<<"\n"; 
        } 
        return 0; 
}
