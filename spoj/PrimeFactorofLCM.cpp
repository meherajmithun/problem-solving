//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};
const int N = 1e7+123;
vector<int>prime;
bitset<N>isprime;
// isprime[i] = 1 --> prime
// isprime[i] = 0 --> Not prime

void sieve(){
    for(int i = 3; i <= N; i += 2){
        isprime[i] = 1;
    }
    isprime[2] = 1;

    for(int i = 3; i <= sqrt(N); i += 2){
        if(isprime[i]){
            for(int j = (i * i); j <= N; j += (2 * i)){
                isprime[j] = 0;
            }
        }
    }
    prime.push_back(2);
    for(int i = 3; i <= N; i += 2){
        if(isprime[i]){
            prime.push_back(i);
        }
    }
    //for(auto u : prime) cout << u << " ";
}

void solve() {
    int n; cin>>n;
    set<int>st;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        for(int j=0; prime[j]*prime[j] <= a; j++){
            while(a%prime[j] == 0){
                st.insert(prime[j]);
                a /= prime[j];
            }
        }
        if(a>1) st.insert(a);
    }
    print(st.size());
    for(auto u : st) cout<<u<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int Case = 1;
    sieve();
    int tc = 1; cin >> tc;
    while (tc--) {
        cout<<"Case #"<<Case++<<": ";
        solve();
    }
    return 0;
}