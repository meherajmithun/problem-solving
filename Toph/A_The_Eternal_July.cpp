#include<bits/stdc++.h>
using namespace std;
#define print(x) cout<<x<<'\n';
vector<string> v = {"January","February","March","April","May","June","July"};

void solve(){
    int n,m; cin >> n >> m;
    if(n <= 7){
        cout<<v[n-1]<<" "<<m<<'\n';
    }
    else{
        cout<<v[6]<<" ";
        int k = (n-7);
        if(k == 1) m+=31;
        if(k == 2) m+=31+31;
        if(k == 3) m+=31+31+30;
        if(k == 4) m+=31+31+30+31;
        if(k == 5) m+=31+31+30+31+30;
        cout<<m<<'\n';
    }
}

int main(){
    int tc = 1; //cin >> tc = =1;
    while(tc--){
        solve();
    }
}