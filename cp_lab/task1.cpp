/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,n,count=0;
	cin>>n;
	for(i = 1; i <= n; i++){
		if(n % i == 0) count++;
	}
	if(count == 2) cout <<"NO PUNISHMENT"<<endl;
	else {
		for(i = 1; i <= n; i++) cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
	}
	}
