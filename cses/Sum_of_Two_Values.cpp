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
#define int long long
#define double long double;

void solve() {
    int n , k ;
    cin >> n >> k;
    vi v(n);
    for(auto &u : v) cin >> u;
    vi v2;
    sort(all(v));
    for(int i = 0; i < n; i++){
        int l = k-v[i];
        int lb = lower_bound(all(v) ,l) - v.begin();
        if(v[lb] == l){
            cout<<i+1<<" "<<lb<<endl;
            return;
        } 
    }
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