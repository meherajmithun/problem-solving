#include<bits/stdc++.h>
using namespace std;

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

int main(){
    int tc; cin >> tc;
    while(tc--){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int>v(m) , v2(k);
    for(auto &u : v) cin >> u;

    map<int,int>mp;

    for(int i=0; i<k; i++){
            cin >> v2[i];
            mp[v2[i]]++;
    }
    if(n == k){
        cout<<string(m,'1') <<'\n';
        continue;
    }
    if(k < n-1) {
        cout<<string(m,'0')<<endl;
        continue;
    }
    for(int i=0; i<m; i++){
       if( mp[v[i]] == 1) cout<<'0';
       else cout << '1';
    }
    cout<<'\n';
    }
}
