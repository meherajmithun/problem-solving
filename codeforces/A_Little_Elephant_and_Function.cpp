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
    vi v;
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    for(int i = n; i > 0; i--) v.pb(i);
    //cout<<v[0]<<" ";
    for(int i = 1; i < v.size()-1; i = i+2){
        swap(v[i],v[i+1]);
    }
    for(auto u : v) cout<<u<<" ";
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