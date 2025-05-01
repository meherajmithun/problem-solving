#include<bits/stdc++.h>
using namespace std;
#define ll long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
void solve(){
    int n,m; cin>>n>>m;
    vector<ll>v(n);
    for(auto &u : v) cin>>u;
    ll a; cin>>a;
    // if(is_sorted(v.begin() , v.end())){
    //     cout<<"YES"<<endl;
    //     return;
    // }
    // reverse(v.begin() , v.end());
    // if(is_sorted(v.begin() , v.end())){
    //     cout<<"YES"<<endl;
    //     return ;
    // }
    // sort(v.begin(),v.end());
    // ll mn = v[0],mx = v[n-1];
    // if(abs(mn-mx) < a) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;

    // vector<ll>v2 = v;
    // reverse(v2.begin() , v2.end());
    // if(is_sorted(v2.begin() , v2.end())){
    //     cout<<"YES"<<endl;
    //     return;
    // }

    // bool f = 1;
    // for(int i=1; i<n; i++){
    //     if(v[i-1]<=v[i]) continue;
    //     v[i] = a-v[i];
    //     if(v[i-1]>v[i]){
    //          v[i-1] = a-v[i-1];
    //          v[i] = a+v[i];
             
    //          if(v[i-1] > v[i]){
    //             cout<<"NO"<<endl;
    //             return;
    //         }
    //         v[i-1] = a+v[i-1];
    //     }
    // }
    // for(auto u : v) cout<<u<<" ";
    // cout<<endl;

    ll tmp = min(v[0],a-v[0]);
    for(int i=1; i<n; i++){
        ll val = min(v[i],a-v[i]);
        //cout<<val<<" ";
        if(val >= tmp ) tmp = val;
        else {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;

}
int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}





