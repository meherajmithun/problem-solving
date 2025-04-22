#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    bool one = false;
    int a = 0, b = 0;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '1') a++;
        if (s[i] == '0') b++;
        if (s[i] == '1') one = true;

        if (one && s[i] == '0' && s[i + 1] == '1') {
            if (i > 0 && s[i - 1] == '0') continue;
            swap(s[i], s[i + 1]);
            i++;
        }
    }

    if (s[n - 1] == '1') a++;
    if (s[n - 1] == '0') b++;

    if (a == 0) {
        cout << b << endl;
        return;
    }
    if (b == 0) {
        cout << (a + 1) << endl;
        return;
    }

    if (s[0] == '1' && a == 1) reverse(s.begin(), s.end());

    int cost = 0;
    if (s[0] == '1') {
        cost += 1;
    }

    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) cost += 2;
        else cost += 1;
    }
    cost++;
    cout << cost << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}
