// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

// 1 2 3
// 4 5 6
// 7 8 9 

void solve() {
    int n; cin>>n;
    int sum = 1,res=1;
    vector<int>cs(n*n+123, 0);
    cs[1] = 1;
    for(int i=1; i<n; i++){
        sum += (n+1);
        res += sum;
        cs[sum] = 1;
        // cout<<sum<<" ";
    }
    // cout<<nl;
    // cout<<res<<nl;
    sum=n,res += n;
    for(int i=1; i<n; i++){
        sum += (n-1);
        if(cs[sum]==0) res += sum;
        cs[sum] = 1;
        // cout<<sum<<" ";
    }
    cout<<res<<nl;
}

int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
