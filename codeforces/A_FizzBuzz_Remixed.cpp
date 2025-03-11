#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int cnt = 0;
        for(int i=0; i<=n/2; i++){
            if((i%3) == (i%5)) cnt++;
        }
        cout<<cnt<<" "<<cnt*2<<endl;
       // cout<<cnt*(n/3*5)<<'\n';
    }
}