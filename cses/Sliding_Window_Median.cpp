//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n,k; cin>>n>>k;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    //sort(v.begin(),v.end());
    vector<int>tmp = v;
    int l=1,r=k;
    while(r<=n){
        int mid = (l+r)/2;
        sort(v.begin()+l , v.begin()+r+1);
        for(int i=l;i<=r; i++) cout<<v[i]<<" ";
        cout<<endl;
        if(k%2 == 0){
            cout<<min(v[mid],v[mid-1])<<" ";
        }
        else{
            cout<<v[mid]<<" ";
        }
        r++;
        l++;
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