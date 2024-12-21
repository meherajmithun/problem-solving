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
    string s ; cin >> s;
    int n = s.size();
    bool visit = true;
    for(int i = 0; i < n; i++){
        cout<<s<<endl;
        if(s[i] != '1' || s[i] != '0'){
            int x = stoi(s);
            x = x / 11;
            s = to_string(x);
            n = s.size();
            i = 0;
            visit = true;
            for(int j = 0; j < n; j++){
                if(s[j] != '0' || s[j] != '1'){
                    visit = false;
                    break;
                }
            }   
            if(visit){
                yes;
                return;
            }











            
        }
         cout<<s<<endl;
    }   
    //cout<<s<<endl;
    no;
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