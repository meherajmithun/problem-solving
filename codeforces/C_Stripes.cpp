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
    int n = 8,flag=0;
    string s;
    while(n--){
        cin >> s;
        if(s =="RRRRRRRR") flag = 1;
    }
    if(flag) cout<<"R"<<endl;
    else cout<<"B"<<endl;
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