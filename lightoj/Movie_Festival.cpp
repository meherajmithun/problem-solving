#include<bits/stdc++.h>
using namespace std;

void optimize(){
	ios_base::sync_with_stdio();
	cin.tie(0);cout.tie(0);
}
int main(){
	optimize();
	int n; cin >> n;
	int t = n;
	vector<pair<int,int>>time;
	while(n--){
		int a,b;
		cin >> a >> b;
		time.push_back({b,a});
	}
	sort(time.begin() , time.end());
	int cnt = 0,i=0,x=-1;
	while(t--){
		if(time[i].second >= x){
			x = time[i].first;
			cnt++;
		}
		i++;
	}
	cout<<cnt<<endl;
}