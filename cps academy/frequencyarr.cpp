#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    vector<int>v(n),freq(n);
    for(auto &u : v) cin >> u;
    for(int i = 0; i < n; i++){
        freq[v[i]]++;
    }
    for(auto u : freq){
        if(u > 0) cout<<u<<" ";
    }
}