#include<bits/stdc++.h>
using namespace std;

void optimize(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
void solve(){
    int n,m; cin >> n >> m;
    string s,s2; cin >> s >> s2;
    int cnt=0;
    for(int i=0; i<= 6; i++){
        if(s.find(s2) != -1){
            cout<<i<<endl;
            return;
        }
        s += s;
    }
    //cout<<s<<" "<<s2<<endl;
    cout<<-1<<endl;
}
int main(){
    optimize();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}