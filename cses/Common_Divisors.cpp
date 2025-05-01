#include<bits/stdc++.h>
using namespace std;
const int mx = 1e+123;
int cnt[mx];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    for(int i=1; i<=mx; i++){
        for(int j=i+1; j<=lim; j+=i) {
            cnt[j]++;
        }
    }
    int n; cin>>n;w
    while(n--){
        int a; cin>>a;
        cout<<cnt[a]<<endl;
    }
}