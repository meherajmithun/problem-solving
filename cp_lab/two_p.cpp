
//two array is sorted individually.your task to count how many number of element is greater from the second.

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v1 = {2,4,6,8,4376};
	vector<int>v2 = {1,3,5,7,9,86};
	int cnt = 0;
	int j = 0;
	int x = v2.size();
	while(x--){
		cnt = 0;
		for(int i = 0; i < v1.size(); i++){
			if(v1[i] < v2[j]){
				cnt++;
			}
		}
		j++;
		cout<<cnt<<endl;
	}
}
