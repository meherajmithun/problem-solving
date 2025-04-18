#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
	int n; cin>>n;
    int l=0,r=n;
    while(l <= r){
        int mid = (l+r)/2;
        int ans = (mid*(mid+1))/2;
        if(ans == n){
            cout<<mid<<endl;
            return;
        }
        if(ans < n){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    cout<<"NAI"<<endl;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int tc; cin>>tc;
	while(tc--){
		solve();
	}
}