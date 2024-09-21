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
   int a; cin >> a;
   if(a == 1){
    no;
    return ;
   }
   int borgo = sqrtl( a );

   if(borgo * borgo == a){

    for(int i = 2; i < borgo; i++){
        if(a % i == 0){
            no;
            return ;
        }
    }
    yes;
    return ;
   }
   no;
}

int32_t main() {
    control;
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}