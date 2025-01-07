#include<bits/stdc++.h>
using namespace std;

void slow(){
	ios_base::sync_with_stdio();
	cin.tie(0);cout.tie(0);
}

void solve(){
	int n; cin >> n;
	int ans = n/2;
	if(n % 2 !=0) ans++;
	cout<<ans<<endl;
	int x = 1;
	int y = 3*n;
	for(int i=0; i<ans; i++){
		cout<<x<<" "<<y<<endl;
		x += 3;
		y -= 3;
	}
}
int main(){
	slow();
	int tc; cin >> tc;
	while(tc--){
		solve();
	}
}