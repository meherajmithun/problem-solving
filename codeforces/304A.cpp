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
    int cnt = 0;
    for(int a = 1; a <= n; a++){
        for(int b = a; b <= n; b++){
            int borgo = sqrt(a*a + b*b);
            if(borgo * borgo == (a*a + b * b) and borgo <= n){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}
