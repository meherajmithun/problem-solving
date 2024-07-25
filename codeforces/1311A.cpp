/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b,count=0;
    cin>>a >>b;
    if(a == b) cout<<0<<endl;
    else if(a < b){
        while(a != b){
            count++;
            a++;
        }
        cout<<count<<endl;
    }
    else if(a > b){
        if(b % 2 == 0){
            cout<<2<<endl;
        }
        else {
            cout<<1<<endl;
        }
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
}