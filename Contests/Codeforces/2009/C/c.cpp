#include<bits/stdc++.h> 
using namespace std; 
void solve(); 
int main() 
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL); 
    cout.tie(NULL);

    int t=1; 
    cin>>t; 
    while(t--) 
    { 
        solve(); 
        cout<<"\n"; 
    } 

    return 0; 
} 
void solve() 
{
    long long int x, y, k;
    cin>>x>>y>>k;
    cout<<max(2*((x+k-1)/k)-1, 2*((y+k-1)/k));
} 
