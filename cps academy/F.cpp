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
    if( n == 1){
        cout<<0<<endl;
        return ;
    }
    int cnt = 0;
    while(n > 0){
        int f1 = 0,f2 = 0, f3 = 0;
        if(n % 2 == 0){
            n = n / 2;
            cnt++;
            f1 = 1;
        }
        if(n % 3 == 0){
            n = (2*n)/3;
            cnt++;
            f2 = 1;
        }
        if(n % 5 == 0){
            n = (4 * n)/5;
            cnt++;
            f3 = 1;
        }
        if(n == 1){
            cout<<cnt<<endl;
            return;
        }
        if(f1 == 0 and f2 == 0 and f3 == 0){
            cout<<-1<<endl;
            return ;
        }
    }
    cout<<-1<<endl;
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
