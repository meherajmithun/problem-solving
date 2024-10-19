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

int32_t main() {
    control;
    int n ; cin >> n;
    vi v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(all(v));
    int x ;
    if(n % 2 == 0){
        x = (n / 2) - 1;
    }
    else {
        x = (n/2);
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += abs(v[x] - v[i]);
   //     cout<<ans<<endl;
    }
    cout<<ans<<endl;
}
