//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define nl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long
#define double long double
#define mod 1000000007
int n , vis[10000012] , dp[10000012];

int dice(int n){
    if(n == 0) return 1;
    if(vis[n] == 1) return dp[n];
    int res = 0;
    for(int i = 1; i <= 6; i++){
        if((n-i) >= 0){
            res += dice(n-i);
            res %= mod;
        }
    }
    vis[n] = 1;
    dp[n] = res; 
    return res;
}

void solve() {
    int n ; cin >> n;
    int ans = dice(n);
    cout<<ans<<endl;
}

int32_t main() {
    slow;
    int tc = 1;
 //   cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}