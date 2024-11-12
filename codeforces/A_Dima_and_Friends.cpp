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
    int n ; cin >> n;
    vi v(n);
    //for(auto &u : v) cin >> u;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int a ; cin >> a;
        sum += a;
    }
    int ans = sum / 5;
    if(sum % 5 != 0) ans++;
    //cout<<ans<<endl;
    cout<<((ans*5)+1)-sum<<endl;
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