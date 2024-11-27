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
    string s ; cin >> s;
    map<char,int>mp;
    for(int i = 0; i < s.size(); i++) mp[s[i]]++;
    if(mp.size() == 2){
        int cnt = 0;
        for(auto u : mp){
            if(u.second == 2) cnt++;
        }
        if(cnt == 2) cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}

int32_t main() {
    slow;
    int tc = 1;
 //   cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}