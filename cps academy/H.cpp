/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
#define control ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
//#define int long long

void solve() {
    int n , k; cin >> n >> k;
    vi v(n);
    for(auto &u : v) cin >> u;
   // for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0 ; i < n - 1 && k; i++){
        int mn = min(v[i], k ) ;
        k -= mn ;
        v[i] -= mn ;
        v[n-1] += mn;
    }
    for(auto u : v) cout<<u<<" ";
    cout<<endl;
}

int32_t main() {
    control;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
