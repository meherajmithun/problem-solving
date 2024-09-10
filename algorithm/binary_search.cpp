#include<bits/stdc++.h>
using namespace std;

int Binary_search(vector<int>v,int n, int k){

	int l = 0;
	int r = n - 1;
	while(l <= r){
		int mid = (l+r)/2;

		if(v[mid] == k){
			return mid;
		}
		else if(v[mid] > k){
			r = mid-1;
		}
		else {
			l = mid+1;
		}
	}
	return -1;
}
int main(){
	int n; cin >> n;

	vector<int>v(n);
	for(int i = 0; i < n; i++) cin >> v[i];

	int key; cin >> key;
	cout<<Binary_search(v,n,key)<<endl;;
}
