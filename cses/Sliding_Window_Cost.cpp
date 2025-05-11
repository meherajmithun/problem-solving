//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define INT_MAX LLONG_MAX
#define INT_MIN LLONG_MIN
#define mod 1000000007

void solve() {
    int n,k; cin>>n>>k;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    int cost = 0,ans = 0;
    int l=1,r=1;
    vector<int> v2 = {v[1]};
    //cout<<v2[0]<<endl;
    while(r<=n){
        int tmp = *(v.begin()+1);       
        cout<<tmp<<" ";
        r++;
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