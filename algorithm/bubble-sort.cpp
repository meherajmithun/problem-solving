#include<bits/stdc++.h>
using namespace std;

int main(){
	int n ; cin >> n;
	vector<int>v(n);
	for(int i = 0; i < n; i++) cin >> v[i];

	int cnt = 1;
	while(cnt < n){
		for(int i = 0; i < n-cnt; i++){
			if(v[i] > v[i+1]){
				swap(v[i] , v[i+1]);
			}
		}
		cnt++;
	}
	for(auto u : v) cout<<u<<" ";
	cout<<endl;
}
