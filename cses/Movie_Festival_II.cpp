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
    int n,k; cin>>n>>k;
    vector<pair<int,int>>vp;
    for(int i=0; i<n; i++){
        int a,b; cin>>a>>b;
        vp.push_back({a,b});
    }   
    sort(vp.begin() , vp.end());
    for(auto u : vp) cout<<u.first<<" "<<u.second<<nl;
    int ans = 0;
    vector<int>mark(n+1 , 0);
    set<pair<int,int>>st;
    for(int i=0; i<k; i++){
        st.insert({vp[i].first , vp[i].second});
    }
    for(auto u : st) cout<<u.first<<" "<<u.second<<nl;

    for(int i=k; i<n; i++){
        auto it = lower_bound(st.begin() , st.end() , vp[i]);
        if(it == st.end()) it--;
        int u = (*it).first;
        int v = (*it).second;
        cout<<u<<" "<<v<<nl;
    }

    // while(k--){ 
    //     int a = -1,cnt=0;
    //     for(int i=0; i<n; i++){
    //         int u = vp[i].first;
    //         int v = vp[i].second;
    //         if(a<=v and mark[i] == 0){
    //             a = u;
    //             cnt++;
    //             mark[i] = 1;
    //         }
    //     }
    //     ans += cnt;
    // }
   // print(ans);


}

int32_t main(){
    fast
    int tc = 1;// cin >> tc;
    while(tc--){
        solve();
    }
}