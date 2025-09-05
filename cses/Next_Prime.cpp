#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e7+123;
bitset<N>isprime;
// isprime[i] = 1 --> prime
// isprime[i] = 0 --> Not prime
vector<int>prime;

bool call(int n){
    // if(n<=3){
    //     return 1;
    // }
    if(n%2 == 0 or n%3 == 0) return 0;
    for(int i=5; i<=sqrt(n); i+=2){
        if(n%i == 0 or n%(i+2) == 0){
            return 0;
        }
    }
    return 1;
}

void solve(){
    int n; cin>>n;
    if(n==1){
        cout<<2<<endl;
        return;
    }
    if(n == 2){
        cout<<3<<endl;
        return;
    }
    int num = n;
    bool mara = 1;
    while(mara){
        num++;
        if(call(num)){
            cout<<num<<endl;
            return;
        }
    }
}

int32_t main(){
    int tc; cin>>tc;
    //sieve();
    while(tc--){
        solve();
    }
}