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
#define double long double
#define mod 1000000007

void solve() {
    int n ; cin >> n;
    vi v(n);
    for(auto &u : v) cin >> u;
    int round = 0;
    // v.erase(v.begin()+3);
    int cnt = 0;
    // for(auto u : v) cout<<u<<" ";
    while(true){
        bool paisi = true;
        for(int i = 1; i < n; i++){
            if(v[i-1] < v[i]){
                if(v[i-1] != -1 and v[i] != -1){
                    v[i] = -1;
                    v[i-1] = -1;
                    cnt += 2;
                    paisi = false;
                }
            }
        }
        round++;
        if(cnt == n){
            cout<<round<<endl;
            return;
        }
        if(paisi){
            cout<<round+1<<endl;
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