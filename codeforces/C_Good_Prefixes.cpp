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
    ll n ; cin >>n;
    vl v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];
    
    vl v2;
    ll cnt = 0;
    
    for(ll i = 0; i < 1; i++){
        v2.push_back(v[i]);
        if(v[i] == 0){
            cnt++;
        }
        for(ll j = 1; j < n; j++){
            v2.push_back(v[j]);
            ll x = *max_element(v2.begin() , v2.end());
            ll sum = 0;
            for(ll k = 0; k < v2.size(); k++){
                sum += v2[k];
            }
            if(sum - x == x){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
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