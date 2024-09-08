#include<bits/stdc++.h> 
using namespace std; 
void solve(); 
int main() 
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    solve(); 

    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0; 
} 
void solve() 
{
    int n, m, h, q;
    cin>>n>>m>>h>>q;
    vector<vector<int>> dist(n, vector<int>(2));
    for(int i=0; i<n; i++)
        cin>>dist[i][0]>>dist[i][1];
    vector<int> net(m);
    for(int i=0; i<m; i++)
        cin>>net[i];
    sort(net.begin(), net.end()); // sorting the net
    int max_catched = 0;
    int qut;
    vector<int> catched_index;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(net[j] == -1)
                continue;

            if(dist[i][1] <= h+net[j] && dist[i][1] >= h-net[j])
            {
                catched_index.push_back(dist[i][0]);
                max_catched++;
                net[j] = -1;
                break;
            }
        }
    }
    // sort(catched_index.begin(), catched_index.end());
    while(q--){
        cin>>qut;
        if(qut > max_catched || qut < 1)
            cout<<-1<<endl;
        else
            cout<<catched_index[qut-1]<<endl;
    }
} 
