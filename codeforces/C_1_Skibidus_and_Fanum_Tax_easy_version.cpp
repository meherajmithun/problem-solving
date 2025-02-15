#include<bits/stdc++.h>
using namespace std;
#define ll long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
void solve(){
    int n,m; cin >> n >> m;
    vector<ll>v(n);
    for(auto &u : v) cin >> u;
    ll a; cin >> a;
   // vector<ll>ans(n) ;
    for(int i=0; i < (1 << n); i++){
        vector<ll> ans = v;
        for(int j=0; j<n; j++){
            if((i >> j) & 1 ){
                ans[j] = a - ans[j];
            }
        }
        if(is_sorted(ans.begin() , ans.end())){
            cout<<"YES"<<endl;
            return;
        }
    }
    
    cout<<"NO"<<endl;
}
int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}