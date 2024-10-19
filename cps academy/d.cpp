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
    int b = 0 , c = 0;
    for(int i = 0; i < n; i++){
        int a ; cin >> a;
        if(a > 0) b += a;
        else c += a;
    }
  //  cout<<b<<" "<<c<<endl;
    cout<<b-c<<endl;
}
