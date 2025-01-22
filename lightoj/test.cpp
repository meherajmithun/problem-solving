#include<bits/stdc++.h>
using namespace std;
#define ll long long

void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

int main(){
    fast();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int l,r; cin >> l >> r;
        l--; r--; 
        
        vector<ll> v(n);
        for(auto &u : v) cin >> u;
        
        vector<ll> v2 = v;
        sort(v2.begin(), v2.end());
        
        int sz = r - l + 1;
        
        for (int i = 0; i < sz; i++) {
            v[i] = v2[i];
        }
        
        ll ans = 0;
        for (int i = 0; i < sz; i++) {
            ans += v[i];
        }
        
        cout << ans << endl;
    }
}
