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
    int k ; cin >> k;
    vector<int>v(n);
    for(int i = 0;i < n; i++) cin >> v[i];
    int sum = 0;
    
    for(int i = 0; i < k; i++){
        sum += v[i];
    }
    if(sum %2 == 0) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
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