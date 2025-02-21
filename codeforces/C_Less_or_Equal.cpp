#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, target;
    cin >> n >> target;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    sort(v.begin() , v.end());
    for(auto u : v) cout <<u <<" ";
    cout<<'\n';
}