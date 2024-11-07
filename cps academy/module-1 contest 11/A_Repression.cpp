#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(3);
    for(auto &u : v) cin >> u;
    sort(v.begin() , v.end());
    cout<<v[2]+v[1]<<endl;
}