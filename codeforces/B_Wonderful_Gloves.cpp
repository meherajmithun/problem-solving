#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define int long long int
using namespace std;

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        int n, m; cin >> n >> m;
        vector<int> v(n);
        for(auto &u : v) cin >> u;

        int cnt = 0;
        set<int> ind;
        for(int i = 0; i < n; i++){
            if(v[i] <= m){
                cnt++;
                ind.insert(i);
            }
        }

        int query; cin >> query;
        while(query--){
            int l, r, k;
            cin >> l >> r >> k;

            l--, r--;

            if(k == 1){
                cout << cnt << endl;
            } else {
                if(cnt > 0){
                    vector<int> in;
                    auto it = ind.lower_bound(l);

                    while(it != ind.end() && *it <= r){
                        int i = *it;
                        v[i] *= k;

                        if(v[i] > m){
                            cnt--;
                            in.push_back(i);
                        }
                        ++it;
                    }

                    for(auto i : in){
                        ind.erase(i);
                    }
                }
                cout << cnt << endl;
            }
        }
    }
}
