
  //Find a triplet that sum to a given value

  //Array must be sorted in two pointer topic,Otherwise You will get a mara.

  //Time complexity O(n^2)

#include<bits/stdc++.h>
using namespace std;

int main(){
	//int n ; cin >> n;
	vector<int>v = {1,2,3,4,6,0};

	int flag = 0;

	sort(v.begin() , v.end());

	int x ; cin >> x;
	for(int i = 0;i < v.size(); i++){
		int l = i+1;
		int r = v.size() - 1;

		while(l < r){
			int sum = v[i] + v[l] + v[r];
			if( sum == x){
				cout<<"Triplets = ("<<v[i]<<","<<v[l]<<","<<v[r]<<")"<<endl;
				flag = 1;
			}
			if(sum > x) r--;
			else l++;
		}
	}
	if(flag == 0) cout<<"You get a mara"<<endl;
}
