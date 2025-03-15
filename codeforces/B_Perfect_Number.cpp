#include<bits/stdc++.h>
using namespace std;
const int mx=1000000+123;
int vis[mx];

void calculation(){
    int j = 0;
    for(int i=1; i<=mx; i++){
        int t=0,n=i;
        while(n>0){
            t += n%10;
            n/=10;
        }
        if(t == 10){
            vis[j] = i;
            j++;
        }
    }
}

int main(){
    calculation();
    int n; cin >> n;
    cout<<vis[n-1];

}