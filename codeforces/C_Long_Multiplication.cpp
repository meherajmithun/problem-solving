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
    string x , y ;
    cin >> x >> y;
    //cout<<x<<y<<endl;
    int n = x.size();
    bool visit = true;
    for(int i = 0; i < n; i++){
        // cout<<x[i]<<" "<<y[i]<<endl;
        int a = x[i] - 48;
        int b = y[i] - 48;
        if(a < b){
            swap(x[i] , y[i]);
            continue;
        }
        else if(a > b){
            for(int k = i+1; k < n; k++){
                if(x[k] > y[k]){
                    swap(x[k] , y[k]);
                }
            }
            cout<<x<<endl<<y<<endl;
            return ;
        }
        
    }
    cout<<x<<endl<<y<<endl;
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