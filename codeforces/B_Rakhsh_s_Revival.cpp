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
    int n , m , k;
    cin >> n >> m >> k;
    string s ; cin >> s;
    int ans = 0;
    int weak = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0') weak++;
        else weak = 0;
        if(weak >= m){
            ans++;
            weak = 0;
            i += k-1;
        }
    }   
    cout<<ans<<endl;
}

int32_t main() {
    slow;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}