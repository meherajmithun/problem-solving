/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

string solve(){
	int n,i,count=0;
	cin>>n;
	for(i = 1; i*i <= n; i++){
		if(n % i == 0) count++;
	}
	if(count == 2) return "YES.";
	else return "NO.";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<solve()<<endl;
	}
}

