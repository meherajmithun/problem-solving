#include<bits/stdc++.h>
using namespace std;
#define int long long
int fact(int n){
    if(n == 1) return 1;
    return n*fact(n-1);
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin>>n;
    int f = fact(n);
    int cnt = 0;
    while(f % 10 == 0){
        cnt++;
        f/=10;
    }
    cout<<cnt<<endl;
}