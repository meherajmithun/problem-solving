//  IN THE NAME OF ALLAH

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

void solve() {
    int n; cin>>n;
    int k = 1;
    for(int i=0; i<n; i++){
        k *= 2;
    }
    vector<string>ans;
    int p =1;
    while(k>0){
        string s = "";
        int zero = 0,one=0;
        for(int i=0; i<n/2; i++){
            s += "0";
        }
        for(int i=0; i<n/2; i++){
            s += "1";
        }
        ans.push_back(s);
        k /= p;
        p++;
    }
    for(auto u : ans) cout<<u<<endl;
    print(k);
}

int32_t main() {
    fast
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}