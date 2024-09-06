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

int main() {
    fastIO;
    ll n ; cin >> n;
    while(n--){
        ll cnt = 0;
        ll a; cin >> a;
        for(ll j = 1; j <= sqrt(a); j++){
            if(a % j == 0){
                cnt++;
                if(a / j != j){
                    cnt++;
                }
            }
        }
        if(cnt == 3) yes;
        else no;
    }
}