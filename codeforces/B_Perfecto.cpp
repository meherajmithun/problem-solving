#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Function to check if a number is a perfect square
bool isPerfectSquare(ll x) {
    if (x < 0) return false;
    ll s = sqrt(x);
    return (s * s == x);
}

// Function to check if a permutation is perfect
bool isPerfectPermutation(vector<int>& perm, int n) {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += perm[i];
        if (isPerfectSquare(sum)) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n == 1) {
            cout << -1 << '\n';
            continue;
        }

        vector<int> perm(n);
        for (int i = 0; i < n; i++) {
            perm[i] = i + 1;
        }

        bool found = false;
        do {
            if (isPerfectPermutation(perm, n)) {
                found = true;
                break;
            }
        } while (next_permutation(perm.begin(), perm.end()));

        if (found) {
            for (int i = 0; i < n; i++) {
                cout << perm[i] << " ";
            }
            cout << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}