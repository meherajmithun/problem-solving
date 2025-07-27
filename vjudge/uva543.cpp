#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e8+123;
int n;
bitset<N>isprime;
// isprime[i] = 1 --> prime
// isprime[i] = 0 --> Not prime
int32_t main(){
    while(1){
        if(n == 0) break;
        cin>>n;
        for(int i = 3; i <= n; i += 2){
            isprime[i] = 1;
        }
        isprime[2] = 1;

        for(int i = 3; i <= sqrt(n); i += 2){
            if(isprime[i]){
                for(int j = (i * i); j <= n; j += (2 * i)){
                    isprime[j] = 0;
                }
            }
        }
        vector<int>prime;
        prime.push_back(2);
        for(int i = 3; i <= n; i += 2){
            if(isprime[i]){
                prime.push_back(i);
            }
        }
        int l=0,r=prime.size()-1;
        while(l<r){
            if(prime[l]+prime[r] == n){
                cout<<n<<" = "<<prime[l]<<" + "<<prime[r]<<endl;
                break;
            }
            else if(prime[l]+prime[r] > n){
                r--;
            }
            else{
                l++;
            }
        }
    }

}