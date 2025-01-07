#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
const int mx = 1e7+123;
int dp[mx];
 
int dice(int n){
    if(n == 0) return 1;
    if(dp[n] != -1) return dp[n];
 
    int res = 0;
    for(int i = 1; i <= 6; i++){
        if((n-i) >= 0){
            res += dice(n-i);
            res %= mod;
        }
    }
    dp[n] = res;
    return dp[n];
}
int main(){
    memset(dp,-1,sizeof(dp));
    int n ; cin >> n;
    cout<<dice(n)<<endl;
}