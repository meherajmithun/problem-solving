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
    int n , k ;
    cin >> n >> k;
    string s ;
    bool flag = true;
    for(int i = 0; i < n; i++){
        string a ; cin >> a;
        string b = a;
        sort(b.begin() , b.end());
        int x = unique(b.begin() , b.end())-b.begin();
        if(x == 4 and b == "aikv"){
            flag = false;
        }
        else{
            for(int j = 0; j < k; j++){
                if(a[j] == 'v' and s.empty()){
                    s.pb(a[j]);
                    break;
                }
                else if(a[j] =='i' and s[s.size()-1] == 'v'){
                    s.pb(a[j]);
                    break;
                }
                else if(a[j] == 'k' and s[s.size()-1] == 'i'){
                    s.pb(a[j]);
                    break;
                }
                else if(a[j] == 'a' and s[s.size()-1]== 'k'){
                    s.pb(a[j]);
                    break;
                }
            }
        }
    }   
    if(flag == false){
        yes;
        return;
    }
    ///
    cout<<s<<endl;
    if(s == "vika") {
        yes;
    }
    else no;
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