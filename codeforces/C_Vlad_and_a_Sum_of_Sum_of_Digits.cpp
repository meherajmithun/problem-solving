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
//#define int long long
#define double long double;
//vector<int>v;

void call(vector<int>v,int n){
    int j = 1;
    for(int i = 1; i <= n; i++){
        v.pb(j);
        if(j == 9){
            j = 0;
        }
        j++;
    }
    ///cout<<endl;
    // for(auto u : v) cout<<u<<" ";
    // cout<<endl;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
    }   
    cout<<sum<<endl;
}

void solve() {
    int n ; cin >> n;
    vi v;
    call(v,n);
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