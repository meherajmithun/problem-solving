//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int left=0,right = 0;
    sort(v.rbegin() , v.rend());
    left = v[0];
    int dif = INT_MAX;
    // while(l<r){
    //     if(left<right){
    //         left += v[l];
    //         l++;
    //     }
    //     else{
    //         right = v[r];
    //         r++;
    //     }
    //     dif = min(dif,abs(left-right));
    // }
    // cout<<dif;

    for(int i=1; i<n; i++){
        if(left>right){
            right += v[i];
        }
        else{
            left += v[i];
        }
        //dif = min(dif,abs(left-right));
    }
    dif = min(dif,abs(left-right));
    //cout<<left<<" "<<right<<endl;
    cout<<dif;

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