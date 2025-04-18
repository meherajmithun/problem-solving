#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k; cin >> n >> k;
    vector<int> v(k);
    for(auto &u : v) cin >> u;

    set<int> unique_values;
    int cnt = 0;
    for(int i = 0; i < k; i++) {
       cnt += n/v[i];
    }
    cout<<cnt<<endl;

    // for(auto x : unique_values) cout << x << "\n";
   // cout << unique_values.size() << endl;

    return 0;
}
