
  //Find all triplets with zero sum
  //Array must be sorted in two pointer topic,Otherwise You will get a mara.
  //Time complexity O(n)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n = 6;
	vector<int> v = { 1 , -1, 0, 2 , -2, 3};

	for(int i = 0; i < n; i++){

		set<int>s;

		for(int j = i+1; j < n; j++){

			int x = -(v[i]  + v[j]);

			if(s.find(x) != s.end()){
				//cout<<s.find(x)<<endl;
				cout<<"( "<<x<<", "<<v[i]<<", "<<v[j]<<")"<<endl;

			}
			else {
				s.insert(v[j]);
			}
		}

		//for(auto u : s)cout<<u<<endl;
	}
}
