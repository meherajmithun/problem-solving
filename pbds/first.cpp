#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    int q; cin>>q;
    ordered_set<int>st;
    while(q--){
        char c; cin>>c;
        int x; cin>>x;
        if(c == '!'){
            st.insert(x);
        }
        else cout<<st.order_of_key(x)<<'\n';
    }
}


// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;

void solve(){
    
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}