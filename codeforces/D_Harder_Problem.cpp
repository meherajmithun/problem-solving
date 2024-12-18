#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n), freq(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int max_freq = 0;
        for (int i = n - 1; i >= 0; --i) {
            freq[a[i]]++;
            max_freq = max(max_freq, freq[a[i]]);

            // Assign a[i] to b[i] if its frequency is the current maximum
            b[i] = a[i];

            // If there are multiple numbers with the same maximum frequency,
            // we can choose any of them. Here, we choose the last one encountered.
            for (int j = i - 1; j >= 0; --j) {
                if (freq[b[j]] < max_freq) {
                    b[j] = a[i];
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}