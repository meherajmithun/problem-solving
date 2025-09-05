//  IN THE NAME OF ALLAH
 
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007
// int modulo(int a,int b){
//     if(b == 0) return 1;
//     int k = modulo(a,b/2);
//     if(b&1){
//         return (a*((k*k)%mod))%mod;
//     }
//     return (k*k)%mod;
// }

int32_t main(){
    int n; cin>>n;
    vector<int>v(n);
    int sum = 0;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        sum += a;
    }
    if(sum&1){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
}