#include <bits/stdc++.h>
using namespace std;
#define int long long

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        bool possible = false;
        // Check each unique element as candidate for min_first and gcd_second
        for (int i = 0; i < n; ++i) {
            int x = a[i];
            vector<int> second;
            for (int j = 0; j < n; ++j) {
                if (a[j] % x == 0) {
                    second.push_back(a[j]);
                }
            }
            if (second.size() < n) { // Ensure first subset is non-empty
                int gcd_second = second[0];
                for (size_t k = 1; k < second.size(); ++k) {
                    gcd_second = gcd(gcd_second, second[k]);
                }
                if (gcd_second == x) {
                    possible = true;
                    break;
                }
            }
        }
        if (possible) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}