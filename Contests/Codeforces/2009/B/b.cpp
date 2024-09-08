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
    int n;
    cin>>n;
    char a[n][4];
    for(int i=0; i<n; i++) {
        for(int j=0; j<4; j++) {
            cin>>a[i][j];
        }
    }
    int count = 0;
    for(int i=n-1; i>=0; i--) {
        count = 0;
        for(int j=0; j<4; j++) {
            count++;
            if(a[i][j] == '#') {
                cout<<count<<" ";
            }
        }
    }
    
} 
