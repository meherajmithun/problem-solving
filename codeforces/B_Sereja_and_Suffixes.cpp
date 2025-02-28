#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int>v(n);
    set<int>st;
    map<int,int>mp;
    vector<pair<int,int>>p;
    int k = 1;
    for(int i =0; i<n; i++){
        cin >> v[i];
        mp[v[i]]++;
        if(mp[v[i]] == 1){
            p.push_back({v[i] , k});
            k++;
        }
    }
    reverse(p.begin() , p.end());
    for(auto u : p) cout << u.first<<" "<<u.second<<'\n';
    vector<int>v2(m);
    for(auto &u : v2) cin >> u;
    //sort(v2.begin() , v2.end());
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(p[j].first == v2[i]){
                cout<<p[j].second+1<<'\n';
            }
        }
    }
}