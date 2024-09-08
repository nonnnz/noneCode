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
    long long int n, k;
    cin>>n>>k;
    long long int change = (n + 1) / 2;
    int max_i = n+k-1;
    int max_half = max_i-(max_i-n);
    long long int sum1 = max_half*(max_half+1)/2 - ((k-1)*(k-1+1)/2);
    long long int sum2 = max_i*(max_i+1)/2 - (max_half*(max_half+1)/2);
    cout<<sum1<<" "<<sum2<<"\n";
    cout<<((k-1)*(k-1+1)/2)<<" "<<max_half<<"\n";
    cout<<sum2-sum1;
} 
