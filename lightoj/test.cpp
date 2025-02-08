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
    vector<ll>v(n);
    for(auto &u : v) cin >> u;
    sort(v.begin() , v.end());

    int query; cin >> query;
    while(query--){
        ll l,s,p;
        cin >> l >> s >> p;
        auto it = lower_bound(v.begin() , v.end() , l) - v.begin();
        it = (n-it);
        ll power = it*p;
        //cout<<it<<" "<<power<<endl;
        if((s-power) > 0) cout<<"Apaa Nai :("<<endl;
        else cout<<"Apaa Ache :)"<<endl;
    }  
}