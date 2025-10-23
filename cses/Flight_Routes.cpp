// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;
#define pii pair<int,int>

void solve(){
    int n,m,k; cin>>n>>m>>k;
    vector<pii>adj[n+1];
    
    for(int i=0; i<m; i++){
        int u,v,w; cin>>u>>v>> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    vector<int>dis(n+1, INT_MAX);
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    dis[1] = 0;
    pq.push({0, 1});
    while(!pq.empty()){
        pii tmp = pq.top();
        int dist = tmp.first;
        int node = tmp.second;
        pq.pop();
        if(dist>dis[node]) continue;
        for(auto &[v,w] : adj[node]){
            int new_dis = w+dist;
            if(new_dis < dis[v]){
                dis[v] = new_dis;
                pq.push({new_dis,v});
            }
        }
    }
    sort(dis.begin() , dis.end());
    //for(int i=0; i<k; i++) cout<<dis[i]<<" ";
    for(auto u : dis) cout<<u<<" ";
}

int32_t main(){
    fast
    int tc = 1; //cin >> tc;
    while(tc--){
        solve();
    }
}
