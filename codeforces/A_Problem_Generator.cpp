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
   int n ; cin >> n;
   int round ; cin >> round;
   string s ; cin >> s;
   sort(s.begin() , s.end());
   int ans = unique(s.begin() , s.end()) -s.begin();
   //cout<<ans<<endl;
   ans = 7 - ans;
   //cout<<ans<<endl;

   if(round > 1){
    ans = round * ans + 1;
   }
   else {
    ans = round * ans;
   }
   cout<<ans<<endl;
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