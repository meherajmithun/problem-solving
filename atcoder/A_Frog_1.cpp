#include<bits/stdc++.h>
using namespace std;
int n;
const int mx = 1e5+123;
int dp[mx];
vector<int>v;

void slow(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
}

int call(int i){
	if(i == n) return 0;
	if(dp[i] != -1) return dp[i];
	int first_cost = INT_MAX;
	int first_try = abs(v[i] - v[i+1]) + call(i+1);
	first_cost = min(first_cost,first_try);
	
	int sec_cost = INT_MAX,sec_try;

	if((i+2) <= n){
		sec_try = abs(v[i] - v[i+2]) + call(i+2);
		sec_cost = min(sec_try , sec_cost);
	} 
	dp[i] = min(first_cost , sec_cost);
	return dp[i];

}

int main(){
	slow();
	cin >> n;
	memset(dp , -1 , sizeof(dp));
	v.push_back(0);
	for(int i=0; i<n; i++){
		int a; cin >> a;
		v.push_back(a);
	}
	int ans = call(1);

	cout<<ans;
}