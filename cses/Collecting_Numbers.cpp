

// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n; 
    cin >> n;
    vi v(n);
    for (auto &u : v) cin >> u;

    int rounds = 1;  // At least one round is required
    int last_collected = v[0]; // The first number collected

    for (int i = 1; i < n; i++) {
        if (v[i] < last_collected) {
            rounds++;  // Start a new round
        }
        last_collected = v[i];  // Update the last collected number
    }

    cout << rounds << '\n';
}

int32_t main() {
    slow;
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
