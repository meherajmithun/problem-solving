#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n ; cin  >> n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int a ; cin >> a;
        sum += a;
    }
    int ans = sum / n;
    if(sum % n != 0) ans++;
    cout<<ans<<endl;
}