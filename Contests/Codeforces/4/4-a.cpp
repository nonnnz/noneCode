#include<bits/stdc++.h> 
using namespace std; 
void solve(); 
int main() 
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL); 
 
    int t=1; 
    // cin>>t; 
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
    int n;
    cin>>n;
    if(n<=2)
    {
        cout<<"NO";
        return;
    }
    cout<< (n%2 == 0 ? "YES":"NO");
}