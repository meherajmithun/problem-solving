#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

int main(){
    slow();
    int n; cin >> n;
    ll target; cin >> target;
    vector<ll>v(n);
    map<ll,ll>mp;
    for(int i=0; i<n; i++){
        cin >> v[i];
        mp[v[i]] = i+1;
    }
    for(int i=0; i<n; i++){
        ll tmp = target - v[i];
        if(mp.count(tmp) and mp[tmp] != i+1){
            cout<<(i+1)<<" "<<mp[tmp]<<endl;
            return 0;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}