/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long arr[n];
	for(int i = 0 ;i < n ; i++){
		cin>>arr[i];
	}
	for(int i = 0 ; i < n ;i++){
		long long div=0;
		for(int j = 1; j <= arr[i]; j++){
			if(arr[i] % j == 0) {
				div++;
			}
		}
		long long count=0;
		for(int k = 1 ; k <= div; k++){
			if(div % k == 0) count++;
		}
		if(count == 2) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}

}
