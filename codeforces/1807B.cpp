/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
#include<vector>
using namespace std;

void loser(){
	int n,i,even=0,odd=0;
	cin>>n;
	vector<int>candies(n);
	for(i = 0 ; i < n ; i++){
		cin>>candies[i];
		if(candies[i] % 2 == 0){
			even++;
		}
		else {
			odd++;
		}
	}
	if(even >= odd) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		loser();
	}
}
