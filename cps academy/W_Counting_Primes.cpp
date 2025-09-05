#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 3e7+123;
bitset<N>isprime;
// isprime[i] = 1 --> prime
// isprime[i] = 0 --> Not prime
vector<int>prime;

void sieve(){
    for(int i = 3; i <= N; i += 2){
        isprime[i] = 1;
    }
    isprime[2] = 1;

    for(int i = 3; i <= sqrt(N); i += 2){
        if(isprime[i]){
            for(int j = (i * i); j <= N; j += (2 * i)){
                isprime[j] = 0;
            }
        }
    }
    prime.push_back(2);
    for(int i = 3; i <= N; i += 2){
        if(isprime[i]){
            prime.push_back(i);
        }
    }
}

void solve(){
    int n,m; cin>>n>>m;
    int cnt = 0;
    for(int i=n; i<=m; i++){
        if(isprime[i]) cnt++;
    }
    cout<<cnt<<"\n";
}

int32_t main(){
    int tc; cin>>tc;
    sieve();
    while(tc--){
        solve();
    }
}