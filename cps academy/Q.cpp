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
    vi a(n),p(n);
    for(int i = 0; i < n; i++){
        cin >> a[i] >> p[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(i != n-1){
            if(p[i] < p[i+1]){
                int sum = p[i] * (a[i] + a[i+1]);
                ans += sum;
                i += 1;
            }
            else {
                int s = p[i]*a[i];
                ans += s;
            }
        }
        else{
            ans += p[i]*a[i];
        }
    }
    cout<<ans<<endl;
}
