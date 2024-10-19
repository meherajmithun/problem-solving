/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/

#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int main() {
    optimize();
    int m, n;
    cin >> n >> m;
    vector<int> v(m);

    for(int i = 0; i < m; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int ans = v[n-1] - v[0];

    for(int i = 1; i <= m - n; i++) {
        ans = min(ans, v[i+n-1] - v[i]);
    }

    cout << ans << endl;
}
