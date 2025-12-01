//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n,a,b;
    cin>>n>>a>>b;
    vector<int>v(n+1),pre(n+1, 0);
    for(int i=0; i<n; i++){
        cin>>v[i];
        pre[i+1] = pre[i]+v[i];
    }
    // for(auto a : pre) cout<<a<<" "; cout<<endl;
    cout<<*max_element(pre.begin() , pre.end());

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