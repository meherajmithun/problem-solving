//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007
vector<int>divisor;

void find_divisor(int n){
    for(int i=1; (i*i) <= n; i++){
        if(n%i == 0){
            divisor.push_back(i);
            if(n/i != i){
                divisor.push_back(n/i);
            }
        }
    }
    int sum = 0,multiple = 1;
    for(int i=0; i<divisor.size(); i++){
        int val = divisor[i];
        sum = (sum+val)%mod;
        multiple = (multiple*val)%mod;
    }
    cout<<divisor.size()<<" "<<sum<<" "<<multiple;
}
int modulo(int a,int b){
    if(b == 0) return 1;
    int k = modulo(a,b/2);
    if(b&1){
        return (a*((k*k)%mod))%mod;
    }
    return (k*k)%mod;
}
void solve() {
    int n; cin>>n;
    int num = 1;
    while(n--){
        int a,b; cin>>a>>b;
        num *= (modulo(a,b)%mod);
        num %= mod;
    }
    //print(num);
    find_divisor(num);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}