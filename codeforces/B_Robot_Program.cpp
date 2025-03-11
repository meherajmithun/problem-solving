#include<bits/stdc++.h>
using namespace std;
#define int long long int

int solve(){
    int n,x,k;
    cin>>n>>x>>k;
    string s; cin>>s;
    int t=0;
    int cnt =0;
    while(1){
        for(int i=n-1; i>=0; i--){
            if(s[i] == 'L') x--;
            else x++;
           /// cout<<x<<" ";
            if(x == 0){
                cnt++;
            }
            t++;
            if(t == k){
                return cnt;
            }
        }
    }
}

int32_t main(){
    int tc; cin >> tc;
    while(tc--){
        cout<<solve()<<'\n';
    }
}