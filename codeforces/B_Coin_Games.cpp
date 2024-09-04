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

void solve(){
    int n ; cin >> n;
    string s; cin >> s;
    int f = 0;
    s.erase(s.begin());
    s.pop_back();
    while ( !s.empty()){
        if(f == 0){
            s.pop_back();
            f = 1;
        }
        else {
            s.erase(s.begin());
            f = 0;
        }
    }
    if(f) yes;
    else no;
}

int main(){
    fastIO;
    int T;
    cin >> T;
    while(T--){
         solve();
    }
    return 0;
}