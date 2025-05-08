#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll &x : a) cin >> x;
        
        sort(a.begin(), a.end());
        
        // Step 1: Check for gaps greater than k
        bool has_large_gap = false;
        for (int i = 0; i < n - 1; ++i) {
            if (a[i+1] - a[i] > k) {
                has_large_gap = true;
                break;
            }
        }
        
        if (has_large_gap) {
            cout << "Jerry\n";  // If there is a gap > k, Tom cannot make a valid move
            continue;
        }

        // Step 2: Calculate how many apples we can remove (above the minimum)
        ll min_val = a[0];
        ll totalMoves = 0;
        for (int i = 0; i < n; ++i) {
            totalMoves += a[i] - min_val;
        }

        // Step 3: Determine the winner based on parity of the moves
        if (totalMoves % 2 == 1) {
            cout << "Tom\n";  // Odd moves → Tom wins
        } else {
            cout << "Jerry\n";  // Even moves → Jerry wins
        }
    }

    return 0;
}
