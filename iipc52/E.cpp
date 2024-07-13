/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,x,j;
	string s;
	char a,b;
	cin>>n>>s>>x;
	for(i = 0 ; i < x ; i++){
		cin>>a>>b;
		for(j = 0 ; j < n ; j++){
			if(s[j] == a){
				s[j] = b;
			}
		}
	}
	cout<<s;
}
