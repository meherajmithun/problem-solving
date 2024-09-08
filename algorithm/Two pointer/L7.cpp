	//Find a triplet such that sum of two equals to third element

	/*Example : n = 9
	v[9] = 5,32,1,7,10,50,19,21,2
	*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n ; cin >> n;
	vector<int>v(n);

	for(int i = 0; i < n; i++) cin >> v[i];
	sort(v.begin() , v.end());

	for(int i = n - 1; i >= 0; i--){
		int l = 0;
		int r = i - 1;
		while(l < r){
			int sum = v[l] + v[r];
			if(sum == v[i]){
				cout<<"Pair ( "<<v[l]<<", "<<v[r]<<" )"<<endl;
			}
			if(sum > v[i]) r--;
			else l++;
		}
	}
}
