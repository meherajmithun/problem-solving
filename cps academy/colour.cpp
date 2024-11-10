#include<bits/stdc++.h>
using namespace std;
const int mx = 1e7+123;
bool isprime[mx];
vector<int>prime;

void sieve(int n){
    for(int i = 3; i <= n; i += 2) isprime[i] = true;

    for(int i = 3; i <= n; i += 2){
        if(isprime[i]){
            for(int j = i+i; j <= n; j += i){
                isprime[j] = false;
            }
        }
    }
    prime.push_back(2);
    for(int i = 3; i <= n; i += 2){
        if(isprime[i]){
            prime.push_back(i);
        }
    }
   // for(auto u : prime) cout<<u<<" ";
    //cout<<endl;
}
int main(){
    int n ; cin >> n;
    sieve(n);
    if(n < 3) cout<<1<<endl;
    else cout<<2<<endl;
    for(int i = 1; i <= n; i++){
        if(!isprime[i]){
            cout<<1<<" ";
        }
        else cout<<2<<" ";
    }

}