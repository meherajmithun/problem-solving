//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n; cin>>n;
    if(n == 1){
        int a; cin>>a;
        cout<<"YES\n";
        return;
    }
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int cnt = (n+1)/2,a=0;
    for(int i=1; i<n; i++){
        if(v[i]>v[0]){
            v[i] *= -1;
            if(v[i] < v[0]) a++;
        }
        else if(v[i] < v[0]) a++;
        if(a == cnt){
            cout<<"YES"<<endl;
            return;
        }
    }
        a=0;
        for(int i=0; i<n; i++){
        if(v[i]>v[0]){
            v[i] *= -1;
            if(v[i] < v[0]) a++;
        }
        else if(v[i] < v[0]) a++;
        if(a == cnt){
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;


}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}