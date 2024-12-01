//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
//#define int long long
#define double long double;

void solve() {
    ll n ; cin >> n;
    vl v(n);
    for(auto &u : v) cin >> u;
    ll sum = 0 , ans = 0;
    for(int i = 0; i < n; i++){
        sum = max(v[i] , sum+v[i]);
        ans = max(ans,sum);
    }
    if(ans == 0){
        sort(v.rbegin() , v.rend());
        cout<<v[0]<<endl;
        return;
    }
    cout<<ans<<endl;
}

int32_t main() {
    slow;
    int tc = 1;
//    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
