#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mx = 90;
int dp[mx];
int cnt = 0;

int fibo(int n){
    cnt++;
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(dp[n] != -1) return dp[n];

    int rem = fibo(n-1)+fibo(n-2);
    dp[n] = rem;
    return rem;
}
int32_t main(){
    memset(dp,-1,sizeof(dp));
    int n; cin >> n;
    cout<<fibo(n)<<endl;
    cout<<cnt<<endl;
}
