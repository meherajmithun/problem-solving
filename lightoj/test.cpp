#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << '\n'

void solve(){
    int n; cin >> n;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    bool paisi = true;
    vector<int>visited(n);
    for(int i=0; i<n; i++){
        visited[i] = i+1;
    }
    for(int i=0; i<n; i++){
        if(v[i] < (i+1)){
            paisi = false;
        }
        if(v[i] > (i+1)){
            swap(visited[i] , visited[v[i]]);
        }
    }
    if( !paisi){
        cout<<-1<<endl;
    }
    else{
        for(auto u : visited) cout<<u<<" ";
        cout<<endl;
    }
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}