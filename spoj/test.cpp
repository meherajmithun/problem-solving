#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const long long N = 1e8+5;
bitset<N+123>isprime;
vector<int>prime;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    for(int i=3; i<=N; i+=2){
        isprime[i] = 1;
    }
    isprime[2] = 1;
    for(int i=3; (i*i) <= N; i+=2){
        if(isprime[i]){
            for(int j = (i*i); j<=N; j+=(2*i)){
                isprime[j] = 0;
            }
        }
    }
    int cnt = 1;
    prime.push_back(2);
    for(int i=3; i<=N; i+=2){
        if(isprime[i]){
            cnt++;
            if(cnt%100 == 1){
                //cout<<cnt<<endl;
                //cnt = 1;
                prime.push_back(i);
            }
        }
    }
    for(auto u : prime) cout<<u<<endl;


}