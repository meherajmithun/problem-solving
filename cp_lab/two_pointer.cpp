
//if two array is sorting individually then make a new by merge the two array and the new is also sorted.

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v1 = {1,3,5,7,8,9};
	vector<int>v2 = {2,4,6,8};
	vector<int>v;
	int j = 0 ; int k = 0;

	int x = v1.size()+v2.size();
	//cout<<x<<endl;
	for(int i = 0; i < x; i++){
		if(j < v1.size() and k < v2.size()){
			if(v1[j] < v2[k]){
				v.push_back(v1[j]);
				j++;
			}
			else {
				v.push_back(v2[k]);
				k++;
			}
		}
		else {

			if(k < v2.size()){
				v.push_back(v2[k]);
				k++;
			}
			if(j < v1.size()){
				v.push_back(v1[j]);
				j++;
			}
		}
	}
	for(auto u : v) cout<<u<<" ";
	cout<<endl;
}
