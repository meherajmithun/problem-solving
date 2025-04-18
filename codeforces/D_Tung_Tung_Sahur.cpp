#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solve() {
    string p, s;
    cin >> p >> s;

    int n = p.length();
    int m = s.length();

    if (m < n) {
        return false;
    }

    int s_ptr = 0;
    for (int p_ptr = 0; p_ptr < n; ++p_ptr) {
        if (s_ptr >= m) {
            return false;
        }
        if (p[p_ptr] == s[s_ptr]) {
            s_ptr++;
        } else {
            return false;
        }
        if (s_ptr < m && s[s_ptr] == p[p_ptr]) {
            s_ptr++;
        }
    }

    return s_ptr == m;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        if (solve()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}