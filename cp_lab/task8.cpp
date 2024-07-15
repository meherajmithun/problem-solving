/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,k=0,arr[1000];
	cin>>a>>b;
	for(int i = a; i <= b; i++){
		int count=0;
		for(int j = 1; j <= i; j++){
			if(i%j == 0) count++;
		}
		if(count == 2){
			arr[k] = i;
			k++;
		}
	}
	if(k == 0) cout<<"-1"<<endl;
	else {
		sort(arr, arr+k);
		cout<<arr[k]<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
