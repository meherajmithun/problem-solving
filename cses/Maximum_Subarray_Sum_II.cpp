//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n,a,b;
    cin>>n>>a>>b;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    int mx = INT_MIN;
    for(int i=1; i<=n; i++){
        int sum=v[1],val = v[1];
        for(int j=a; j<=b; j++){
            sum += v[j];
            val = max(sum,v[j]);
            mx = max(mx,val);
        }
    }
    cout<<mx<<endl;
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