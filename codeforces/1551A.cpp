/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long i=0,n;
    cin>>n;
    while(i != n){
        if(i * 1 + i * 2 == n){
            cout<<i <<" " <<i<<endl;
            break;
        }
        else if((i+1 * 1) + i * 2 == n){
            cout<<i+1 <<" " <<i<<endl;
            break;
        }
        i++;
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
}