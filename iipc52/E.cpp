#include<iostream>
using namespace std;

void solve(int n,string s){
	char i,a,b;
	cin>>a>>b;
	for(i = 0 ; i < n ;i++){
		if(s[i] == a){
			s[i] = b;
		}
	}
	cout<<s<<endl;
}
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int t;
	cin>>t;
	while(t--){
		solve(n,s);
	}
}
