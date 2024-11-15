// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n; 
    cin >> n;
    vector<int> h(n);
    for (int &x : h) cin >> x;
    
    // Array to keep track of the new heights
    vector<int> result(n, 0);
    result[0] = h[0]; // The first pillar remains as is
    int operations = 0;

    for (int i = 1; i < n; i++) {
        // Ensure the array is non-decreasing
        if (h[i] < result[i - 1]) {
            result[i] = result[i - 1];
            operations += (result[i - 1] - h[i]); // Calculate required operations
        } else {
            result[i] = h[i];
        }
    }

    cout << operations << '\n';
}

int main() {
    slow;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
