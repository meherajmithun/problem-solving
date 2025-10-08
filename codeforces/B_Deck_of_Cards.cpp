// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    vector<char>ans(n, '+');
    // for(auto u : ans) cout<<u; cout<<nl;
    int a=0,b=0,c=0;
    for(auto u : s){
        if(u == '0') a++;
        else if(u == '1') b++;
        else c++;
    } 
    cout<<a<<" "<<b<<" "<<c<<nl;
    for(int i=0; i<a; i++) ans[i] = '-';
    for(int i=a; i<a+c; i++) ans[i] = '?';
    int t = b,i=n-1;
    while(t--){
        ans[i]='-';
        i--;
    }
    if(b>0) i +=1;
    while(c--){
        ans[i] == '?';
        i--;
    }
    for(auto u : ans) cout<<u; cout<<nl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}