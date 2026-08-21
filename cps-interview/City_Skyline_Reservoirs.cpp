// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()


void solve() {
    int n; cin>>n;
    vector<int>v(n),left(n),right(n);
    for(auto &a : v) cin>>a;
    left[0] = v[0], right[n-1] = v[n-1];

    for(int i=1; i<n; i++){
        left[i] = max(left[i-1], v[i]);
    }
    for(int i=n-2; i>=0; i--){
        right[i] = max(right[i+1], v[i]);
    }
    // for(auto a : left) cout<<a<<" "; cout<<nl;
    // for(auto a : right) cout<<a<<" "; cout<<nl;
    int ans = 0;
    for(int i=0; i<n; i++){
        int val = min(left[i], right[i]);
        // cout<<val<<" ";
        if(val>v[i]) ans += (val-v[i]);
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
