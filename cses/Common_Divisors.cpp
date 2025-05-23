#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 1e6 + 1;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    vector<int> freq(MAX, 0);
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        freq[a]++;
    }

    for(int g = MAX - 1; g >= 1; g--){
        int count = 0;
        for(int j = g; j < MAX; j += g){
            count += freq[j];
        }
        if(count > 1){
            cout << g;
            return 0;
        }
    }
}
