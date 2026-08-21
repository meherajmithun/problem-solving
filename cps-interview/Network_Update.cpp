// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve(){
    int n,m; cin>>n>>m;
    vector<int>adj[n+123];
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>vis(n+123, 0),dis(n+123, 0);
    queue<int>q;
    int s; cin>>s;
    while(s--){
        int a; cin>>a;
        vis[a]=1; q.push(a);
    }
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(auto v : adj[u]){
            if(vis[v]) continue;
            q.push(v); vis[v] = 1;
            dis[v] = dis[u]+1;
        }
    }
    int ans = 0;
    for(int i=1; i<=n; i++){
        if(vis[i]==0){
            cout<<"-1\n"; return;
        }
        ans = max(ans, dis[i]);
    }
    cout<<ans<<nl;


}
int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
