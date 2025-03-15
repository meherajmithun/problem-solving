#include<bits/stdc++.h>
using namespace std;
#define print(x) cout<<x<<'\n';
#define ll long long

int main(){
    int tc; cin>>tc;
    while(tc--){
        int n,x,y;
        cin>>n>>x>>y;
        int ans = 0;
        map<pair<ll,ll>,int>mp;
        for(int i=0; i<n; i++){
            ll a; cin >> a;
            ll tmp = a%x, t2 = a%y;
            ll t1 = (x-tmp)%x , t3=t2;
            if(mp.find({t1,t3}) != mp.end()){
                ans += mp[{t1,t3}];
            }
            mp[{t1,t2}]++;
        }
        print(ans);
    }
}
