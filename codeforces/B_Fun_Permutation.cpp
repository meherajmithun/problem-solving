// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; 
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];

    vector<int> q(n);
    for (int i = 0; i < n; i++) {
        q[i] = p[(i + 1) % n];  // cyclic shift by 1
    }

    for (int i = 0; i < n; i++) cout << q[i] << " ";
    cout << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) solve();
}
