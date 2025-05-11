//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define INT_MAX LLONG_MAX
#define INT_MIN LLONG_MIN
#define mod 1000000007

///2 4 8 14 21 28
///6 10 12 19 21 28

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v)  cin>>u;
    vector<int>v2 = v;
    sort(v.begin() , v.end());
    vector<int>pre(n+1),pre2(n+1);

    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1]+v[i-1];
        pre2[i] = pre2[i-1]+v2[i-1];
    }
    int query; cin>>query;
    while(query--){
        int type,l,r; 
        cin>>type>>l>>r;
        if(type == 1){
            print(pre2[r]-pre2[l-1]);
        }
        else{
            print(pre[r]-pre[l-1]);
        }
    }

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