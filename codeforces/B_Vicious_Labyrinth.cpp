#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;

    vector<int> a(n + 1);  
    for (int i = 1; i <= n; i++) {
        cin >> a[i];  // Reading the teleportation mapping correctly
    }

    for (int i = 1; i <= n; i++) {
        int pos = i;
        long long steps = k;

        // Simulate k teleportations
        while (steps--) {
            pos = a[pos];  
        }

        cout << pos << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
