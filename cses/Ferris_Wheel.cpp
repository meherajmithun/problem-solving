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
    int n , k ; cin >> n >> k;
    vi v(n);
    for(auto &u : v) cin >> u;
    sort(all(v));
    int cnt = 0 , sum = 0;
    for(int i = n-1; i >= 0; i--){
        sum = 0;
        if(i == 0){
            cnt++;
            break;
        }
        sum = v[i] + v [i-1];
        if(sum > k){
            cnt++;
        }
        else if(sum <= k){
            i -= 1;
            cnt++;
        }
       // cout<<i<<endl;
    }
    cout<<cnt<<endl;
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