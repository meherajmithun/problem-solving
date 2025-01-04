//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define double long double;

void solve() {
    ll n , k;
    cin >> n >> k;
    vi even;
    vi odd;
    if(n == 1){
        int x ; cin >> x ;
        if(x % 2 == 0){
            cout<<"No"<<endl;
            return;
        }
        else{
            cout<<"Yes"<<endl;
            return;
        }
    }

    for(int i = 0; i < n; i++){
        int a ; cin >> a ;
        if(a % 2 == 0) even.pb(a);
        else odd.pb(a);
    }
    // sort(all(odd));
    // sort(all(even));
    int sum = 0;
    if(k > odd.size()){
        for(int i = 0; i < odd.size(); i++){
            sum += odd[i];
        }
        for(int i = 0; i < abs(ll(odd.size())-k); i++){
            sum += even[i];
        }
        if(sum % 2 == 0){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
        return;
    }
    else{
        sum = 0;
        for(int i = 0; i < k; i++){
            sum += odd[i];
        }
        if(sum % 2 == 0){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
}

int32_t main() {
    slow;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}