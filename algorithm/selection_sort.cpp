#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>&v,int n){

	for(int i = 0; i < n; i++){

		for(int j = 0; j < n; j++){

			if(v[i] < v[j]){

				swap(v[i] , v[j]);
			}
		}
	}
	return v;
}

int main(){
	int n ; cin >> n;
	vector<int>v(n);

	for(int i = 0; i < n; i++) cin >> v[i];

	vector<int>ans = solve(v,n);

	for(auto u : ans) cout<<u<<" ";
	cout<<endl;
}
