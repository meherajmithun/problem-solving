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
    if(n % 2 != 0){
        cout<<-1<<endl;
        return;
    }
    vi v;
    v.pb(0);
    for(int i = 1; i <= n; i++) v.pb(i);
    for(int i = 1; i < n; i++){
        if(v[i] == i) swap(v[i],v[i+1]);
    }    
    for(int i = 1; i <= n; i++) cout<<v[i]<<" ";

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