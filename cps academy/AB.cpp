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
    int n , query ; cin >> n >> query;
    vi v;
    for(int i = 0; i < n; i++){
        int x ; cin >> x;
        v.pb(x);
    }

    sort(v.rbegin() , v.rend());
    vi pre(n+1);

    for(int i = 1; i <= n; i++){
        pre[i] = pre[i-1] + v[i-1];
    }

    while(query--){
        int a , b ; cin >> a >> b;
        //cout<<pre[b-1]<<" "<<pre[a]<<endl;
        int ans = abs(pre[b-1]-pre[a]);
        cout<<ans<<endl;

    }
}
