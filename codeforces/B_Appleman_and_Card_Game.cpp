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

int main(){
    fastIO;
    int n; cin >> n;
    int k; cin >> k;
    string s; cin >> s;
    char x = s[k-2];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == x){
            cnt += k-1;
        }
    }
    cout<<cnt+1<<endl;
}