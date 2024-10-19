#include <bits/stdc++.h>
using namespace std;
const int mx = 1e+8;
int arr[mx];
int main(){
    int tc ; cin >> tc;
    for(int T = 1; T <= tc; T++){
        int n , m;
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            int a ; cin >> a;
            arr[i] = arr[i-1]+a;
            arr[i] %= m;
        }
        map<int,int>cnt;
        cnt[0]++;
        int ans = 0;
        for(int i = 1; i <= n; i++){
            ans += cnt[arr[i]];
            cnt[arr[i]]++;
        }
        cout<<"Case "<<T<<": "<<ans<<endl;

    }
}
