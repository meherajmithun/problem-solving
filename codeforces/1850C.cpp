/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
#include<algorithm>
using namespace std;

void solve(){
	string s;
	cin>>s;
	sort(s.begin() , s.end());
	cout<<s<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
