#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int calculate_alice_score(const vector<int>& marbles) {
    unordered_map<int, int> color_count;
    
    // Count occurrences of each color
    for (int color : marbles) {
        color_count[color]++;
    }

    // Store counts of marbles by color in a vector
    vector<int> counts;
    for (const auto& pair : color_count) {
        counts.push_back(pair.second);
    }

    // Sort counts in descending order to prioritize high-count colors
    sort(counts.rbegin(), counts.rend());

    int alice_score = 0;
    int alice_colors_taken = 0; // Track unique colors Alice has taken
    int taken_colors = 0; // Number of distinct colors Alice has taken fully

    // Simulate the game turn by turn
    for (int i = 0; i < counts.size(); ++i) {
        // Alice's turn (only for even indices in zero-based indexing)
        if (i % 2 == 0) {
            alice_score++;
            if (counts[i] == 1) {
                // Alice takes all marbles of this color (only one marble left)
                alice_score++;
                taken_colors++;
            }
            alice_colors_taken++;
        } else {
            // Bob's turn, he takes the next color to minimize Alice's score
        }
    }

    return alice_score;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> marbles(n);
        for (int i = 0; i < n; ++i) {
            cin >> marbles[i];
        }
        cout << calculate_alice_score(marbles) << endl;
    }
    return 0;
}
