#include<bits/stdc++.h>
using namespace std;

void optimize(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
}

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	for(int i=0; i<n; i++){
		if(s[i] == 'U'){
			s[i] = 'D';
		}
        else if(s[i] == 'D'){
            s[i] = 'U';
        }
	}
	cout<<s<<endl;
}
int main(){
	optimize();
	int tc; cin >> tc;
	while(tc--){
		solve();
	}
}