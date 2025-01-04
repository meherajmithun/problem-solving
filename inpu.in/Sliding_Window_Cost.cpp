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
#define int long long

int32_t main() {
    slow;
    int n , k ; cin >> n >> k;
    vi v(n);
    for(auto &u : v) cin>> u;
    //vi v2;
    int l = 0 , r = 2;
    while(r < n){
        vi v2(3);
        int j = 0;
        for(int i = l; i <= r; i++){
            v2[j] = v[i];
            j++;
        }
        sort(all(v2));
        int ans = 0;
        ans += abs(v2[0] - v2[1]);
        ans += abs(v2[1] - v2[2]);
        cout<<ans<<" ";
        l++;
        r++;
    }

    return 0;
}