// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

// Function to compute (a * b) % mod safely
int modmul(int a, int b) {
    return (a % MOD) * (b % MOD) % MOD;
}

// Function to compute sum of integers from l to r modulo MOD
int range_sum(int l, int r) {
    int cnt = r - l + 1;
    int total = (cnt % MOD) * ((l + r) % MOD) % MOD;
    return modmul(total, (MOD + 1) / 2); // divide by 2 modulo MOD
}

void solve() {
    int n;
    cin >> n;
    int ans = 0;

    for (int i = 1, j; i <= n; i = j + 1) {
        int val = n / i;
        j = n / val;
        int s = range_sum(i, j); // sum of d from i to j
        ans = (ans + modmul(val, s)) % MOD;
    }

    cout << ans << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
