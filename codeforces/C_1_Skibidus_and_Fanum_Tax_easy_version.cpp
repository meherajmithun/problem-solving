//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).end(), (x).begin()
#define print(x) cout<<x<<'\n'
using namespace std;

void solve() {
    int n,m; cin>>n>>m;
    vector<int>a(n),b(m);
    for(auto &u : a) cin>>u;
    for(auto &u : b) cin>>u;
    if(n == 1){
        cout<<"YES\n";
        return;
    }
    sort(b.begin() , b.end());
    for(int i=1; i<n; i++){
        auto lb = lower_bound(b.begin() , b.end(),a[i])-b.begin();
        if(lb == m) lb--;
        // cout<<lb<<" ";
        if(b[lb]-a[i] < a[i-1]){
            a[i-1] = b[lb]-a[i-1];
        }
    }
    if(is_sorted(a.begin() , a.end())){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
    // for(auto u : a) cout<<u<<" "; cout<<endl;
    // cout<<endl;
}

int32_t main() {
    fast
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}