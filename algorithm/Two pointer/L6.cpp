
  //Find four elements that sum to a given value .
  //Array must be sorted.
  //Time complexity O(n^3)

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v = {2,2,4,4,6,8,8,0};
	sort(v.begin() , v.end());
	int x ; cin >> x;

	int flag = 0;
	for(int i = 0; i < v.size(); i++){
		for(int j = i+1; j < v.size(); j++){
			int l = j+1;
			int r = v.size()-1;
			while(l < r){
				int sum = v[i] + v[j] + v[l] + v[r];
				if(sum == x){
					cout<<"Tetra = ("<<v[i]<<","<<v[j]<<","<<v[l]<<","<<v[r]<<")"<<endl;
					flag = 1;
				}
				if(sum > x) r--;
				else l++;
			}
		}
	}
	if(flag == 0) cout<<"Code abr check kor,Input O check kor"<<endl;
}
