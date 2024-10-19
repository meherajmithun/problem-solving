/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
#define control ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long

void solve() {
    int n , m ; cin >> n >> m;
    string s , t ; cin >> s >> t;
    if(s == t){
        cout<<0<<endl;
        return;
    }
    if(m != n){
        cout<<abs(n-m)<<endl;
        return;
    }
    int cnt = 0;
    int l = 0, r = 0;
    while(l < s.size() and r < t.size()){
        if(s[l] == t[r]){
            l++;
            r++;
        }
        else{
            s.erase(s.begin()+l);
            t.erase(t.begin()+r);
            cnt += 2;
        }
    }
   // cout<<s<<" "<<t<<endl;
    if(s == t){
        cout<<cnt<<endl;
    }
    else  cout<<-1<<endl;
}

int32_t main() {
    control;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
