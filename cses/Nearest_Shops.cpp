#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k; cin>>n>>m>>k;
    vector<int>cs(k);
    for(auto &a : cs) cin>>a;
    vector<int>adj[n+1];
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(auto a : cs){
        vector<int>visited(n+1, 0),level(n+1, 0);
        queue<int>q;
        level[a]=0, visited[a]=1;
        while(!q.empty()){
            
        }
    }
}