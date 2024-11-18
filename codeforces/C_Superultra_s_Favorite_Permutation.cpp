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
#define double long double;

void solve() {

    int n;
    cin >> n;
    if (n == 2 || n == 3) {
        cout << "-1\n";
        return;
    }
    vi composite;

    for (int i = 2; i <= n; i += 2) {
        composite.push_back(i);
    }
    for (int i = 1; i <= n; i += 2) {
        composite.push_back(i);
    }
    for (int u : composite) cout << u << " ";
    cout << endl;    
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