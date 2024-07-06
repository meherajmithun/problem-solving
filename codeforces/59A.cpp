//ALLAH IS ALMIGHTY
#include<bits/stdc++.h>
using namespace std;
string word(string s){
	int upper=0,lower=0;
	for(int i = 0 ; i < s.size() ; i++){
		if(isupper(s[i])){
			upper++;
		}
		else {
			lower++;
		}
	}
	if(upper > lower){
		transform(s.begin() , s.end() , s.begin(),::toupper);
	}
	else if(upper < lower){
		transform(s.begin() , s.end() , s.begin(),::tolower);
	}
	else if(upper == lower){
		transform(s.begin() , s.end() , s.begin(),::tolower);
	}
	return s;
}
int main(){
	string s;
	cin>>s;

	string str = word(s);
	cout<<str;
}
