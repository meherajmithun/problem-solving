#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n; cin>>n;
    ll sum = 0;
    for(int i=1; (i*i) <= n; i++){
        ll t1 = i * (n / i - i + 1); 

        ll t2 = (((n / i) * (n / i + 1)) / 2) - ((i * (i + 1)) / 2); 
        sum += t1 + t2;
    }
    cout<<sum;
} 