#include<iostream>
using namespace std;

void solve(int test){
	int i=0;
	while(test--){
		int a,b;
		cin>>a>>b;
		cout<<"Case "<<i+1<<": "<<a+b<<endl;
		i++;
	}
}
int main(){
	int test;
	cin>>test;
	solve(test);
}
