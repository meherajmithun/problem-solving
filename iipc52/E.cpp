#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int t;
	char a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		for(i = 0 ; i < n ; i++){
			if(s[i] == a){
				s[i] = b;
			}
		}
	}
	cout<<s<<endl;
}
