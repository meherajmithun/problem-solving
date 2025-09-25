//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).end(), (x).begin()
#define print(x) cout<<x<<'\n'
using namespace std;
const ll N = (ll) 3e7;
bitset<N+123> isprime;
// isprime[i] = 1 --> prime
// isprime[i] = 0 --> Not prime

void sieve() {
    for (int i = 3; i <= N; i += 2) {
        isprime[i] = 1;
    }
    isprime[2] = 1;

    for (int i = 3; i <= sqrt(N); i += 2) {
        if (isprime[i]) {
            for (int j = (i * i); j <= sqrt(N); j += (2 * i)) {
                isprime[j] = 0;
            }
        }
    }
    vector<int> prime;
    prime.push_back(2);
    for (int i = 3; i <= N; i += 2) {
        if (isprime[i]) {
            prime.push_back(i);
        }
    }
    // for (auto u : prime) cout << u << " ";
}

vector<int>divisor(int n){
    vector<int>div;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            int a = i, b= n/i;
            int cnt = 0,cnt1=0;
            if(isprime[a]) {cnt++, k++;}
            else {cnt1++ , k++;}
            for(int j=2; j<=sqrt(a); j++){
                if(n%j == 0){
                    k++;
                    if(isprime[j]) cnt++;
                    else cnt1++;
                    if(n/i != i){
                        k++;
                        if(isprime[n/i]) cnt++;
                        else cnt1++;
                    }
                }
            }
            if(a == b){
                if()
            }
        }
    }
}

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    int k = 1;
    for(auto u : v) k *= u;
    divisor(k);
}

int32_t main() {
    fast
    sieve();
    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}