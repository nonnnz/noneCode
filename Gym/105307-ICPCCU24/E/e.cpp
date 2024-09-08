#include<bits/stdc++.h> 
using namespace std; 
void solve(); 
int main() 
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    int t=1; 
    cin>>t; 
    while(t--) 
    { 
        solve(); 
        cout<<"\n"; 
    } 

    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0; 
} 
void solve() 
{
    int n, a;
    cin>>n>>a;
    cout<<max(n*a ,n*(n+1)/2);
} 
