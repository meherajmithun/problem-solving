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
    vector<int>v(3);
    for(int i = 0; i < 3; i++) cin >> v[i];
    sort(v.begin() , v.end());
    int sum = 0;
    for(int i = 0; i < 3; i++) sum += v[i];
    if(sum % 2 != 0){
        cout<<-1<<endl;
        return ;
    }
    else {
        int ans = min(v[0] + v[1],sum/2);
        cout<<ans<<endl;
        return ;
    }
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