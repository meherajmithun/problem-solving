/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/
#include<bits/stdc++.h>
using namespace std;

int loser(){
    int n,a,b;
    cin>>n>>a>>b;
    if(n == 2){
        if(b <= n*a) return b;
        else return n*a;
    }
    else if ( n >= 3){
        int x = n - 2;
        int y = a * x + b;
        int z = n * a;
        if(y <= z) return y;
        else return z;
    }
    else return a;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<loser()<<endl;
    }
}
