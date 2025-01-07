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
#define double long double;
 
void solve() {
    int n ; cin >> n;
    int cnt = 0;
    int t = n;
    int x = -1;
    vector<pii> p;
    while(t--){
        int a , b ;
        cin >> a >> b;
        p.push_back({b,a});
    }
    sort(all(p));
    //cout<<n<<endl;
    int i = 0;
    while(n--){
        if(p[i].second >= x){
            x = p[i].first;
            cnt++;
        }
        i++;
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