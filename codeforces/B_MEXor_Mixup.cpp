#include<bits/stdc++.h>
using namespace std;

void optimize(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
}

void solve(){
	int a,b; cin >> a >> b;
	int k = b;
	for(int i=0; i<a; i++){
		k ^= i;
	}
	if(k == 0) cout<<a<<endl;
	else if(k != a) cout<<(a+1)<<endl;
	else cout<<(a+2)<<endl;
}
int main(){
	optimize();
	int tc; cin >> tc;
	while(tc--){
		solve();
	}
}



///a1^a2^a3^a4 == b
//k ^ b = 0
//else 