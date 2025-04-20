#include<bits/stdc++.h>
using namespace std;
#define int long long
#define print(x) cout << x << " ";

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,t; cin>>n>>t;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int sum = 0,cnt = 0,j=0;
    for(int i=0; i<n; i++){
        sum += v[i];
        if(sum <= t) cnt++;
        else{
            sum -= v[j];
            j++;
        }
    }
    print(cnt);
}