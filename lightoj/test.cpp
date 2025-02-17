#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++) cin >> v[i];
    multiset<int>ms;
    for(int i=1; i<=k; i++){
        ms.insert(v[i]);
    }

    for(int i=1; i<=(n-k+1); i++){
        int mn = *ms.begin();
        int mx = *ms.rbegin();
        cout<<mn<<" "<<mx<<'\n';
        if((i+k) <= n){
            ms.erase(ms.find(v[i]));
            ms.insert(v[i+k]);
        }
    }
}