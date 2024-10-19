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
    map<int,int>mp;
    vi v;
    for(int i = 0; i < n; i++){
        int a ; cin >> a;
        if(mp[a] == 0){
            v.pb(a);
            mp[a]++;
        }
    }
   // for(auto u : v) cout<<u<<" ";
    //cout<<endl;
    bool sorted = true;
    int cnt = 0;
    for(int i = 0; i < v.size(); i++){
       // sorted = true;
        for(int j = 0; j < v.size()-1; j++){
            if(v[j] > v[j+1]){
                swap(v[j] , v[j+1]);
                cnt++;
                sorted = false;
            }
        }

    }
    cout<<cnt<<endl;
}
