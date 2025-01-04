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
#define double long double
#define mod 1000000007

void solve() {
    int n ; cin >> n;
    vi v(n);
    for(auto &u : v) cin >> u;
    int mx = INT_MIN;
    int l = 0 , r = 0;
    map<int,int>mp;
    //mp[v[r]]++;
    while(r < n){
        //r++;
        mp[v[r]]++;
        if(mp[v[r]] == 2){
           // mp[v[l]]--;
            while(l <= r){
             //   l++;
                mp[v[l]]--;
                l++;
                if(mp[v[r]] == 1){
                    break;
                }
               //l++; 
            }
        }
        mx = max(mx,r-l+1);    
        r++;
    }
    cout<<mx<<endl;
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