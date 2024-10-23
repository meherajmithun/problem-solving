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
    int n , m , k;
    cin >> n >> m >> k;
    vi v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int paisi = max(m,k);
    sort(all(v));
    reverse(all(v));
    int ans = 0;
    for(int i = 0; i < paisi; i++){
        ans += v[i];
    }
    cout<<ans<<endl;
}