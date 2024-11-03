// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long

void solve() {
    string s;
    cin >> s;
    int query;
    cin >> query;
    while (query--) {
        int a, b;
        cin >> a >> b;
        a--; // Converting to 0-based index
        b--; // Converting to 0-based index

        if ((b - a + 1) < 4) {
            no;
            continue;
        }
        
        bool found = false;
        for (int i = a; i <= b - 3; i++) {
            if (s.substr(i,i + 4) == "1100") {
                yes;
                found = true;
                break;
            }
        }
        
        if (!found) no;
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
