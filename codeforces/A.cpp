#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n;
	cin>>n;
	string s;
	cin>>s;
	cout<<(n == 1 || (n == 2 and s[0] != s[1]) ? "YES" : "NO")<<endl;
}
