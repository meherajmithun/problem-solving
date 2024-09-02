#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v1 = {1,3,5,7,9};
	vector<int>v2 = {2,4,6,8};
	vector<int>v;
	int j = 0 ; int k = 0;

	int x = v1.size()+v2.size();
	//cout<<x<<endl;
	for(int i = 0; i < x; i++){
		if(v1[j] < v2[k]){
			v.push_back(v1[j]);
			j++;
		}
		else {
			v.push_back(v2[k]);
			k++;
		}
	}
	for(auto u : v) cout<<u<<" ";
	cout<<endl;
}
