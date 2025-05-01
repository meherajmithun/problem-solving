#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Determine who has card 1 and card n
        bool alice_has_1 = (s[0] == 'A');
        bool bob_has_1 = (s[0] == 'B');
        bool alice_has_n = (s[n - 1] == 'A');
        bool bob_has_n = (s[n - 1] == 'B');

        // If Alice has card 1 and Bob has card n, Alice wins
        if (alice_has_1 && bob_has_n) {
            cout << "Alice" << endl;
        }
        // If Bob has card 1 and Alice has card n, Bob wins
        else if (bob_has_1 && alice_has_n) {
            cout << "Bob" << endl;
        }
        // Otherwise, compare the smallest card each player has
        else {
            int alice_min = INT_MAX, bob_min = INT_MAX;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'A') {
                    alice_min = min(alice_min, i + 1);
                } else {
                    bob_min = min(bob_min, i + 1);
                }
            }
            if (alice_min < bob_min) {
                cout << "Alice" << endl;
            } else {
                cout << "Bob" << endl;
            }
        }
    }
    return 0;
}