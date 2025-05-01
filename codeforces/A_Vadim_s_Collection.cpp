#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
	string s; cin>>s;
    vector<int>v;
    for(auto u : s){
        v.push_back(u-'0');
    }
    sort(v.begin(),v.end());
    vector<bool>v2(10);z
    vector<int>ans;
    for (int i = 0; i < 10; ++i) {
        int lagbe = 9 - i;
        int nisi = -1;
        for (int j = 0; j < 10; ++j) {
            if (!v2[j] && v[j] >= lagbe) {
                nisi = j;
                break;
            }
        }
        if (nisi == -1) {
            for (int j = 0; j < 10; ++j) {
                if (!v2[j]) {
                    nisi = j;
                    break;
                }
            }
        }
        v2[nisi] = true;
        ans.push_back(v[nisi]);
    }
    
    for (int t : ans) {
        cout << t;
    }
    cout << endl;


}

int32_t main(){
	int tc; cin>>tc;
	while(tc--){
		solve();
	}
}