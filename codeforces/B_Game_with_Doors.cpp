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
   int l,r;
    cin >> l >> r;
    int L ,R;
    cin >> L >> R;
    int cnt = 0;
    int x = min(l,L);
    int y = max(l,L);
    int k = min(r,R);
    int m = max(r,R);
    for(int i = x; i <= k; i++){
        for(int j = y; j <= m; j++){
            if(i+1 == j){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    
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