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
    int n; cin>>n;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    for(int i=1; i<=n; i++){
        if(i == 1 or v[i] == 1) {
            cout<<0<<" ";
            continue;
        }

        int val = v[i];
        bool here = false;
        for(int j=i-1; j>=1; j--){
            if(v[j]<val){
                cout<<j<<" ";
                here = true;
                break;
            }
        }
        if(!here){
            cout<<0<<" ";
        }
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