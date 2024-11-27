#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    map<int,vector<int>>mp;
    for(int i = 0; i < n; i++){
        int a ; cin >> a;
        mp[5].push_back(a);
    }
    for(auto u : mp[5]) cout<<u<<" ";
    cout<<endl;

}