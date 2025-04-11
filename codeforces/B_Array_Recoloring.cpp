#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,k; cin >> n >> k;
    vector<ll>v(n);
    for(auto &u : v) cin >> u;
    sort(v.rbegin() , v.rend());
    if(k == 1){
        cout<<v[0]<<'\n';
        return;
    }
    ll cost = 0;
    for(int i=0; i<k; i++){
        cost += v[i];
        //cout<<cost<<" ";
    }
    //cout<<endl;
    cost += v[k];
    cout<<cost<<'\n';
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}