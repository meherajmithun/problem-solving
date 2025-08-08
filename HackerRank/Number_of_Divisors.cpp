#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e7+123;
bitset<N>isprime;
#define print(x) cout<< x <<'\n';
// isprime[i] = 1 --> prime
// isprime[i] = 0 --> Not prime

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

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
    vector<int>prime;
    prime.push_back(2);
    for(int i = 3; i <= N; i += 2){
        if(isprime[i]){
            prime.push_back(i);
        }
    }
    // for(auto u : prime) cout << u << " ";
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        int ans = 1;
        for(int i=0; prime[i]*prime[i] <= n; i++){
            int cnt = 0;
            while(n%prime[i] == 0){
                cnt++;
                n /= prime[i];
            }
            ans *= (cnt+1);
        }
        if(n > 1) ans *= 2;
        print(ans);
    }

}