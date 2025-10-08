#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<long long,int>
#define ll long long
const int N = 1e5+123;

int32_t main(){
    int n,m; cin>>n>>m;
    vector<pii>adj[N];
    for(int i=0; i<m; i++){
        int a,b,c; cin>>a>>b>>c;
        adj[a].push_back({b,c});
    }
    vector<ll>dis(n+1, LLONG_MAX);
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    dis[1] = 0;
    pq.push({0,1});
    while(!pq.empty()){
        pii tmp = pq.top();
        int dist = tmp.first;
        int node = tmp.second;
        pq.pop();
        if(dis[node]<dist) continue;

        for(auto &[v,w] : adj[node]){
            int new_dis = dist+w;
            if(new_dis < dis[v]){
                dis[v] = new_dis;
                pq.push({new_dis,v});
            }
        }
    }
    for(int i=1; i<=n; i++) cout<<dis[i]<<" ";
}