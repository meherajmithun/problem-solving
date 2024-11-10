#include<bits/stdc++.h>
using namespace std;
const int mx = 1e7+123;
bool isprime[mx];
vector<int>prime;

void sieve(int n){
    for(int i = 3; i <= n; i += 2) isprime[i] = true;

    for(int i = 3; i <= n; i += 2){
        if(isprime[i] == true){
            for(int j=i+i; j<= n; j+=i){
                isprime[j] = false;
            }
        }
    }
    //prime.push_back(2);
    for(int j = 3; j <= n; j++){
        if(isprime[j]){
            prime.push_back(j);
        }
    }
}
int main(){
    int n ;
    sieve(1e6);
   // for(auto u : prime) cout<<u<<" ";
    while(cin >> n){
        if(n == 0 ) return 0;
        bool paisi = false;
        for(auto u : prime){
            if(u > n) return 0;
            int a = u;
            int b = n - a;
            if(isprime[b]){
                cout<<n<<" = "<<a<<" + "<<b<<endl;
                paisi = true;
                break;
            }
        }
        if( !paisi) cout<<"Matha Mundo"<<endl;
    }
}