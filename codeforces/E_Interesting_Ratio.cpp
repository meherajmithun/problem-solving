#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mx = 1e7 + 123;
bool isprime[mx];
vector<int> prime;

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void sieve(int n) {
    for (int i = 3; i <= n; i += 2) {
        isprime[i] = true;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (isprime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isprime[j] = false;
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i <= n; i += 2) {
        if (isprime[i]) {
            prime.push_back(i);
        }
    }
}

void solve(){
    int n;  cin >> n;
        sieve(n);
        
        int ans = 0;
        for (auto u  : prime) {
            if (u > n){
                cout<<ans<<endl;
                return;
            }
            ans += n / u;
        }
        cout << ans<< '\n';
        
        for (int i = 0; i <= n; ++i) {
            isprime[i] = false;
        }
        prime.clear();
}


int32_t main() {
    slow();
    
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
    
}