//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

void solve() {
    int n; cin>>n;
    vector<int>a(n),b(n);
    for(auto &u : a) cin>>u;
    for(auto &u : b) cin>>u;
    int ans = 0;
    for(int i=0; i<n; i++){
        if(a[i] > b[i]) {
            a[i]--;
            //i = 0;
            ans++;
        }
        else if(a[i] < b[i]){
            a[i]++;
            ans++;
        }
        else if(a[i] == b[i]) break;
        //ans++;
        if(i == n-1) i =0;
    }
    print(ans);
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