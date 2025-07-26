#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5;
int isprime[mx];

int main(){
	int n; cin>>n;
	for(int i=3; i <= n; i+=2){
		isprime[i] = 1;
	}
	isprime[2] = 1;
	for(int i=3; (i*i) <= n; i+=2){
		for(int j=i+i; j<=n; j+=i){
			isprime[j] = 0;
		}
	}
	vector<int>prime;
	prime.push_back(2);
	for(int i=3; i<=n; i+=2){
		if(isprime[i]){
			prime.push_back(i);
		}
	}
	for(auto u : prime) cout<<u<<" ";

}