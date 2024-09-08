
    // Find the closest pair from two sorted arrays
    //Array must be sorted in two pointer topic,Otherwise You will get a mara.
	//Time complexity O(n)

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v = {1,3,5,6,9};
	vector<int>v2 = {2,4,6,8,151650};

	int x ; cin >> x;
	int l = 0, r = 4;
	int ind1,ind2;
	//int sz = max(v.size() , v2.size());
	//cout<<sz<<endl;
	int ans = INT_MAX;
	while(l < v.size() && r >= 0)						{
		int sum = v[l] + v2[r];
		if(abs(sum - x) < ans){
			ind1 = l;
			ind2 = r;
			ans = abs(sum-x);
			//cout<<ans<<endl;
		}
		if(sum < x) l++;
		else r--;
		//cout<<sum<<endl;
	}
	cout<<"( "<<ind1<<" , "<<ind2<<" ) = " <<  v[ind1] + v2[ind2] <<endl;
}
