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
    if(n == 2){
        int a ; cin >> a;
        if(a == 1){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
        return ;
    }
    n--;
    vi v(n);
    for(auto &u : v) cin >> u;
    sort(all(v));
    for(int i = 0; i < n-`; i++){
        if(v[i+1]-v[i] != 1){
            cout<<v[i]+1<<endl;
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