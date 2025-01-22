#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N; // Number of frogs
        cin >> N;

        vector<int> A(N); // Buckets where frogs are initially located
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        // Debug: Print the input array
        cout << "Input A: ";
        for (int i = 0; i < N; ++i) {
            cout << A[i] << " ";
        }
        cout << "\n";

        // Use a map to count occurrences of each bucket
        map<int, int> bucket_count;
        int max_frogs_in_bucket = 0;

        for (int i = 0; i < N; ++i) {
            bucket_count[A[i]]++;
            max_frogs_in_bucket = max(max_frogs_in_bucket, bucket_count[A[i]]);
        }

        // Debug: Print bucket counts
        cout << "Bucket counts: ";
        for (auto &[bucket, count] : bucket_count) {
            cout << "(" << bucket << ": " << count << ") ";
        }
        cout << "\n";

        // Output the maximum number of frogs in a single bucket
        cout << max_frogs_in_bucket << "\n";
    }

    return 0;
}
