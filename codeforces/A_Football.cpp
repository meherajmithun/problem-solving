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
    map<string,int>mp;
  //  vector<string>v;
    for(int i = 0; i < n; i++){
        string s ; cin >> s;
       // v.pb(s);
       mp[s]++;
    }
  //  for(auto u : mp) cout<<u.first<<" "<<u.second<<endl;
    int mx = 0;
    string ans ;
    for(auto u : mp){
        if(u.second > mx){
            mx = u.second;
            ans = u.first;
        }
    }
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