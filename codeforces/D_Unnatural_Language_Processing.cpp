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
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) (a).begin(),(a).end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"

void solve() {
   int n  ;cin >> n ;
   string s; cin >> s;

   vector<char>v;
   for(int i = 0; i < n; i++){
    if(s[i] != 'a' and s[i] != 'e'){
        if(s[i+1] == 'a' || s[i+1] == 'e'){
            if(s[i+2] != 'a' and s[i+2] != 'e'){
                if(s[i+3] != 'a' and s[i+3] != 'e'){
                    v.pb(s[i]);
                    v.pb(s[i+1]);
                    v.pb(s[i+2]);
                    v.pb('.');
                    i = i + 2;
                }
                else {
                    v.pb(s[i]);
                    v.pb(s[i+1]);
                    v.pb('.');
                    i = i + 1;
                }
            }
        }
    }
   }
   v.pop_back();
   for(auto u : v) cout<<u;
   cout<<endl;
}

int main() {
    fastIO;
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}