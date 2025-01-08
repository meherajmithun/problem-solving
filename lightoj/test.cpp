#include<bits/stdc++.h>
using  namespace std;
#define ll long long

void optimize(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
}
void solve(){
	int n; cin >>  n;
	vector<ll>arr(n);
	for(auto &u : arr) cin >> u;
	ll sum=0;
	for(int i=0; i<n; i++){
		sum += arr[i];
	}
	cout<<abs(sum)<<endl;
}
int main(){
	optimize();
	int tc; cin >> tc;
	while(tc--){
		solve();
	}
}