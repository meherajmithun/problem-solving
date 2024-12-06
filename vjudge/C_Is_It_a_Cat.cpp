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
    int n ; cin >> n ;
    string s ; cin >> s;
    transform(s.begin() , s.end() , s.begin() , ::tolower);
    sort(all(s));
    int x = unique(s.begin() , s.end())-s.begin();
    int cnt = 0;
    string ans;
    for(int i = 0; i < x; i++){
        ans += s[i];
    }   
    //cout<<ans<< endl;
    if(ans == "emow") yes;
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