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
    vector<int>v(n),pre(n+1);
    for(int i=1; i<=n; i++){
        int a; cin>>a;
        pre[i] = pre[i-1] + a;
    }
    // for(auto a : pre) cout<<a<<" "; cout<<nl;
    for(int i=1; i<n; i++){
        if(i+k<=n) cout<<pre[i+k]-pre[i]<<" ";
        else{
            int x = (i+k)-n;
            cout<< (pre[n]-pre[i])+pre[x]<<" ";
        }
    }
    cout<<pre[k]<<nl;
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
