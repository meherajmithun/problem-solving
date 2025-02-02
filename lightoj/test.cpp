#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
void solve(){
    int n; cin >> n;
    set<int>st;
    vector<int>v(n),v2(n);
    for(auto &u : v) cin >> u;
    for(auto &u : v2) cin >> u;
    //sort(v.begin() , v.end());
    //sort(v2.rbegin() , v2.rend());
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            st.insert(v[i]+v2[i]);
            if(st.size() >= 3){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    ///if(st.size() >= 3) cout<<"YES"<<endl;
     cout<<"NO"<<endl;
}

int32_t main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}