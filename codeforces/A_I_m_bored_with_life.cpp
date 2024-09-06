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

int main(){
    ll a,b,fact1=1,fact2=1;
    cin >> a >> b;
    for(ll i = 1; i <= a; i++){
        fact1 = fact1 * i;
    }
    for(ll i = 1; i <= b; i++){
        fact2 = fact2 * i;
    }
    if(fact1 > fact2) cout<<fact2<<endl;
    else cout << fact1<<endl;
    
}