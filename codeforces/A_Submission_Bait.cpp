//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define solo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) (v).begin(), (v).end()
#define pb push_back
const int MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    int n ; cin >> n;
    vi v(n);
    for(auto &u : v) cin >> u;
    int mx = 0;
    sort(v.rbegin() , v.rend());
    bool ok = true;
    for(int i = 0; i < n; i++){
        if(v[i] >= mx and ok == true){
            mx = v[i];
            ok = false;
        }
        else if(v[i] >= mx and ok == false){
            mx = v[i];
            ok = true;
        }
        else{
            break;
        }
    }
    if(ok == false) yes;
    else no;
}

int32_t main() {
    solo;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}