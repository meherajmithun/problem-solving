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
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"

void solve() {
   int k ; cin >> k;
   int n ; cin >> n;
   for(int i = 1; i < k; i++){
    cout<<i<<" ";
   }
   cout<<n<<endl;
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