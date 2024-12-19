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
    int n ; cin >> n ;
    vi v(n);
    vi pre(n+1);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        pre[i+1] = pre[i]+v[i]; 
    }
    // for(auto u : pre) cout<<u<<" ";
    // cout<<endl;
    string s ; cin >> s;
    int sum = 0;
    int l = - 1 , r = -1;
    for(int i = 0; i < n; i++){
        if(s[i] == 'L' and l == -1){
            l = i;
        }
        else if(s[i] == 'R' and r == -1){
            r = i;
        }
        else{
            break;
        }
    }  
    //cout<<l<<" "<<r<<endl; 
    if( l == -1 or r == -1){
        cout<<sum<<endl;
        return;
    }
    sum = pre[r+1] - pre[l];
    // cout<<sum<<endl;
    while(r < n){
        r++;
        if(s[r] == 'R' ){
            if(s[r+1] == 'R'){
                int tmp = r;
                for(int i = r; i < n; i++){
                    if(s[r] == 'L'){
                        break;
                    }
                    tmp = i;
                }
                r = tmp;
            }
            bool paisi = false;
            int k = l;
            while(l < r){
                l++;
                if(s[l] == 'L'){
                    paisi = true;
                    sum += pre[r+1]-pre[l];
                    break;
                }
            }
            if(!paisi){
                sum += pre[r+1]-pre[k];
            }
        }
        //cout<<sum<<endl;
    }
    cout<<sum<<endl;
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