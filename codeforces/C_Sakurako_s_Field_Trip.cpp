#include <iostream>
#include <vector>
using namespace std;

int minimalDisturbance(vector<int>& a, int n) {
    // Step 1: Calculate the initial number of disturbances
    int disturbance = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] == a[i + 1]) {
            disturbance++;
        }
    }

    // Step 2: Find where swaps can minimize disturbances
    // We will focus on the middle part, where a swap might help.
    int l = -1, r = -1;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] == a[i + 1]) {
            if (l == -1) l = i; // First occurrence of disturbance
            r = i; // Last occurrence of disturbance
        }
    }

    // If no disturbances, return 0
    if (l == -1) return 0;

    // Step 3: Calculate the minimal number of swaps needed
    if (r - l <= 1) {
        // If disturbances are isolated or minimal, only one swap is needed
        return 1;
    } else {
        // If disturbances span more than one pair, at most two swaps are needed
        return 2;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Output the result for the current test case
        cout << minimalDisturbance(a, n) << endl;
    }

    return 0;
}
