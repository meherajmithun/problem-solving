#include <bits/stdc++.h>
using namespace std;

// Solve a single test case
void solve() {
    int n;
    cin >> n;

    // If n = 2 or n = 3, it's impossible to construct the permutation
    if (n == 2 || n == 3) {
        cout << "-1\n";
        return;
    }

    // Generate a valid permutation
    vector<int> permutation;

    // Start by placing all even numbers
    for (int i = 2; i <= n; i += 2) {
        permutation.push_back(i);
    }

    // Then place all odd numbers
    for (int i = 1; i <= n; i += 2) {
        permutation.push_back(i);
    }

    // Print the permutation
    for (int num : permutation) {
        cout << num << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
