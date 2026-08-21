// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve(){
    int n; cin >> n;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    int ans = INT_MIN,mx = INT_MIN;
    for(int i=0; i<n; i++){
        mx = max(v[i] , mx+v[i]);
        ans = max(ans,mx);
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
