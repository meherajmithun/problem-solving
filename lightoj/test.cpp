#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int cnt=0,res=0;
    for(int i=0; i<n; i++){
        if(s[i] == '(') cnt++;
        else if(s[i] == ')' and cnt > 0) cnt--;
        else res++;
    }
    cout<<res<<endl;
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}