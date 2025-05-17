//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n,k; cin>>n>>k;
    int x,a,b,c; 
    cin>>x>>a>>b>>c;
    vector<int>v(n);
    v[0] = x;
    for(int i=1; i<n; i++){
        v[i] = ((v[i-1]*a) + b)%c;
    }
    // for(auto u : v) cout<<u<<" ";
    // cout<<endl;
    vector<int>pre(n),suf(n);
    pre[0] = v[0] , suf[n-1] = v[n-1];

    for(int i=1; i<n; i++){
        pre[i] = pre[i-1] | v[i];
    }
    for(int i=n-2; i>=0; i--){
        suf[i] = (suf[i+1] | v[i]);
    }
    vector<int>OR;
    int l=0,r=k-1;
    while(r<n){
        auto tmp = (pre[r] | suf[l]);
        OR.push_back(tmp);
        l++,r++;
    }
    for(auto u : OR) cout<<u<<" ";



}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}