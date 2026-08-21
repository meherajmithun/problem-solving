// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int cnt = 0;
    map<int,int>mp;
    vector<int>pre(n+1);
    mp[pre[0]]++;
    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1]+v[i-1];
    }
    // for(auto u : pre) cout<<u<<" ";
    // cout<<endl;
 
    for(int i=1; i<=n; i++){
        int t = (pre[i]-k);
        cnt += mp[t];
        mp[pre[i]]++;
    }
    cout<<cnt<<nl;
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
