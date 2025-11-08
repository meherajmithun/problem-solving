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
    int n,x ;  cin >> n >> x;
    vector<int>v(n);
    map<int,int>mp;
    for(auto &a : v) {
        cin>>a;
        mp[a]++;
    }
    int mex = 0;    sort(all(v));

    for(auto a : v){
        if(a==mex) mex++;
    }
    if(mex==0){
        print(mex); return;
    }

    for(int i=0; i<n; i++){
        int a = v[i];
        if(mp[a]>1){
            mp[a]--;
            while(a<n){
                a += x;
                if(mp[a]==0) break;
            }
            if(a>n) a -= x;
            v[i] = a;
            mp[a]++;
        }
    }
    mex = 0;    sort(all(v));
    for(auto a : v){
        if(a==mex) mex++;
    }
    cout<<mex<<nl;   
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}