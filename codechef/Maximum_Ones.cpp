#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int max_ones = 0;
    for (int i = 0; i <= k; ++i) {
        string temp_s = s;
        int remaining_ops = k - i;

        for (int j = 0; j < i; ++j) {
            if (temp_s[n - 2 - j] == '1') {
                temp_s[n - 2 - j] = '1';
            }
        }
        
        string temp_s2 = temp_s;
        for(int j = 0; j < remaining_ops; j++){
            if(j+i > n-2) break;
            if(temp_s2[n-3-j] == '1'){
                temp_s2[n-3-j] = '1';
            }
        }
        
        int ones = 0;
        for (char c : temp_s2) {
            if (c == '1') {
                ones++;
            }
        }
        max_ones = max(max_ones, ones);
    }
    
    for (int i = 0; i <= k; ++i) {
        string temp_s = s;
        int remaining_ops = k - i;

        for (int j = 0; j < i; ++j) {
            if (temp_s[0 + j] == '1') {
                temp_s[0 + j] = '1';
            }
        }
        
        string temp_s2 = temp_s;
        for(int j = 0; j < remaining_ops; j++){
            if(temp_s2[1+j] == '1'){
                temp_s2[1+j] = '1';
            }
        }
        
        int ones = 0;
        for (char c : temp_s2) {
            if (c == '1') {
                ones++;
            }
        }
        max_ones = max(max_ones, ones);
    }
    
    
    for(int i = 0; i <=k; i++){
        string temp_s = s;
        int rem = k-i;
        for(int j = 0; j<i; j++){
            if(n-2-j < 0) break;
            temp_s[n-2-j] = max(temp_s[n-2-j],temp_s[n-1-j]);
        }
        for(int j = 0; j<rem; j++){
            if(j+0>= n-1) break;
            temp_s[0+j] = max(temp_s[0+j], temp_s[1+j]);
        }
        int ones = 0;
        for(char c: temp_s){
            if(c == '1') ones++;
        }
        max_ones = max(max_ones, ones);
    }

    return max_ones;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}