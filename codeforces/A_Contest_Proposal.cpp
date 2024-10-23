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
   vl a;
   vl b;
   for(int i = 0; i < n; i++){
    int x ; cin >> x;
    a.pb( x );
   }
   for(int i = 0; i < n; i++){
    int y ; cin >> y;
    b.pb( y );
   }
   int cnt = 0 , j = 0;
   for(int i = 0; i < n; i++){
    if(a[j] > b[i]){
        cnt++;
    }
    else{
        j++;
    }
   }
   //cout<<endl;
   cout<<cnt<<endl;
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