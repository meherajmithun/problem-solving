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
    int n ; cin >> n;
    string s ; cin >> s;
    int op = n-1;
    for(int i = 0; i < n; i++){
        if(s[i] == 'B') op--;
        else break;
    }
    for(int i = n-1; i >= 0; i--){
        if(s[i] == 'A') op--;
        else break;
    }
    if(op < 0) cout<<0<<endl;
    else cout<<op<<endl;
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
