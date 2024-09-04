/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define ll long long
#define no (cout << "NO\n")
#define yes (cout << "YES\n")

string solve(){
    ll n , k;
    cin >> n >> k;
    if(n == k) return "YES";
    else if( n % 2 == 0){
        return "YES";
    }
    else {
        for(ll i = 1; i <= n; i++){
            if(2 * i + k == n){
                return "YES";
            }
        }
    }
    return "NO";
}
int main(){
    int T;
    cin >> T;
    while(T--){
       cout << solve() <<endl;
    }
}

