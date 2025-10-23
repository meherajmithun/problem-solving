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

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    int mx = -1;
    for(auto &u : v) {
        cin>>u;
        mx = max(mx,u);
    }
    sort(v.begin() , v.end());
    while(mx--){
        int bl=0;
        for(auto u : v){
            if(mx%u == 0){
                bl=1;
                break;
            }
        }
        if(!bl ) {
            print(mx);
            return;
        }
    }
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}