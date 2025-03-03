#include<bits/stdc++.h>
using namespace std;
#define ll long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(){
    ll a,b; cin >> a >> b;
    if(b==1){
        cout<<"NO"<<'\n';
        return ;
    }
    ll x = a;
    ll y = a*b;
    ll z = x*(b+1);
    cout<<"YES"<<endl<<x<<" "<<y<<" "<<z<<'\n';
}

int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}