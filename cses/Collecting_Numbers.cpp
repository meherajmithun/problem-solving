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
    while(true){
        bool painai = true;
        for(int i = 0; i < (int)v.size(); i++){
            if(v[i] < v[i+1]){
                painai = false;
                v.erase(v.begin()+i);
                v.erase(v.begin()+i+1);
                if(i >= v.size()){
                    break;
                }
            }
        }
        //round++;
        if(painai){
            round += v.size();
            cout<<round<<endl;
            return;
        }
        round++;
        if(v.size() == 1){
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