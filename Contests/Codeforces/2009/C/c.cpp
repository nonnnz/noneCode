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
    long long int x, y, k;
    cin>>x>>y>>k;
    long long int m_x=-1, m_y=-1;
    int count = 0;
    while(true) {
        if(m_x + k >= x && m_y + k >= y) {
            cout<<count;
            return;
        }
        if(m_x + k <= x) {
            m_x = m_x + k;
            cout<<m_x<<" "<<m_y<<"\n";
            count++;
        }
        if(m_y + k <= y) {
            m_y = m_y + k;
            cout<<m_x<<" "<<m_y<<"\n";
            count++;
        }
    }
} 
