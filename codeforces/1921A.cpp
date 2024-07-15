/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int solve(){
	int i,a[4],b[4];
	for(i = 0; i < 4; i++){
		cin>>a[i]>>b[i];
	}
	int x = a[2]-a[0];
	int y = b[2]-b[0];

	int m = sqrt(x*x+y*y);
	return m*m;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<solve()<<endl;
	}
}
