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
   // int n ; cin >> n;
    string s ; cin >> s;
    if(s.size() == 1){
        cout<<0<<endl;
        return;
    }
    if(s[0] == '1' and s[s.size()-1] != '1'){
        cout<<0<<endl;
    }   
    else if(s[0] != '1' and s[s.size()-1] == '1'){
        cout<<0<<endl;
    }
    else if(s[0] == '1'){
        int cnt = 0;
        for(int i = 1; i < s.size(); i++){
            if(s[i] == '1'){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    else if(s[s.size()-1]){
        int cnt = 0;
        for(int i = 0; i < s.size()-1; i++){
            if(s[i] == '1'){
                cnt++;
            }
        }
        cout<<cnt<<endl;
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