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
    int borgo = sqrt(n);

    if(borgo * borgo != n){
        cout<<"NO"<<endl;
        return;
    }
    if(borgo * borgo == n){
        int cnt = 0;
        for(int i = 1;i <= sqrt(n); i++){
            if(borgo % i == 0){
                cnt++;
            }
        }
        if(cnt == 2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

int32_t main() {
    control;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
