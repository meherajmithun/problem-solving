/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int arr[n];
	for(i = 0 ; i < n ; i++) cin>>arr[i];
	sort(arr , arr + n);
	int min = arr[0];
	int max = arr[n-1];
	for(i = 0 ; i < n ; i++){
		if(arr[i+1] != arr[i]){
			for(j = 1 ; j < max ; j++){
				if(arr[j] - j != arr[i]){
					j++;
				}
				else {
					break;
				}
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
