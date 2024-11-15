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
    string s; cin >> s;
    int queries ; cin >> queries;
    int flag = 0;
    while(queries--){
        int a , b ; cin >> a >> b;
        if((a+b) < 5){
            no;
            flag = 1;
        }
        bool found = false;
        if(flag == 0){
            if(b != 0){
                b--;
            }
            a--;
            for(int i = b; i < a-3; i++){
                 cout<<s.substr(i,i+4)<<endl;
                if(s.substr(i,i+4) == "1100"){
                    yes;
                    found = true;
                    break;
                }
            }
        }
        if( !found and flag == 0) no;
    }   
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