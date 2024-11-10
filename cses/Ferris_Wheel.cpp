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
    int cnt = 0 , sum = 0;
    sort(v.rbegin() , v.rend());
    int l = 0 , r = n - 1;
    while (l < r){
        sum = v[l] + v[r];
        if(sum > k){
            l++;
            cnt++;
        }
        else{
            r--;
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int32_t main() {
    slow;
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}