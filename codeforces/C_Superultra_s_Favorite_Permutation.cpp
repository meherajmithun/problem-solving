#include<bits/stdc++.h>
using namespace std;

void sokal_8tay_class(){
	int n ; cin >> n;
	if(n <= 4){
		cout<<-1<<endl;
		return;
	}
	vector<int>odd;
	vector<int>even;
	
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0) even.push_back(i);
		else odd.push_back(i);
	}
	auto it1 = find(odd.begin() , odd.end() , 5);
	if(it1 != odd.end()){
		odd.erase(it1);
		odd.push_back(5);
	}
	auto it2 = find(even.begin() , even.end() , 4);
	if(it2 != even.end()){
		even.erase(it2);
		even.insert(even.begin(),4);
	}
	for(auto u : odd) cout<<u<<" ";
	for(auto u : even) cout<<u<<" ";

	cout<<endl;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc ; cin >> tc;
    while(tc--){
        sokal_8tay_class();
    }
}