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
   int n , k;
   cin >> n >> k;
   vector<int>v;
   for(int i = 0;i < n; i++){
       int a ; cin >> a;
       v.pb(a);
   }
   if(n == 1){
    cout<<0<<endl;
    return ;
   }
    int cnt = 0;
   sort(v.begin() , v.end());
   for(int i = 0; i < n-1; i++){
    int ans = abs(v[i] - v[i+1]);
    //cout<<v[i+1]<<" ";
    cout<<ans<<' ';
    if(ans > k || ans == 0){
        cnt++;
    }
   }
   cout<<endl;
   //cout<<cnt<<endl;
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