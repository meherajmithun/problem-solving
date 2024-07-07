#include<iostream>
using namespace std;
int main(){
	int n,q,l,r;
	cin>>n>>q;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	for(int j = 1 ; j <= q ; j++){
		cin>>l>>r;
		int sum = 0 ;
		for(int k = l-1 ; k < r ; k++){
			sum =sum + arr[k];
		}
		cout<<sum<<endl;
	}
}
