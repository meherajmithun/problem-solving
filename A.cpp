/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

void solve(){
	int n,r,ans;
	cin >> n;
	int a=0;
	while(n > 0){
		r = n % 10;
		n = n / 10;
		a = a  + r;
	}
	cout << a << endl;;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		solve();
	}
}
