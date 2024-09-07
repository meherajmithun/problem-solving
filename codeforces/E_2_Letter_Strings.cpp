/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) (a).begin(),(a).end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"

void solve() {
   int n ; cin >> n;
   vector<string>v(n);
   int cnt = 0;
   string s;
   for(int i = 0; i < n; i++){
    cin >> s;
    v.pb(s);
   }
   for(int i = 0; i < n; i++){
    s = v[i];
    char a = s[0],b = s[1];
    for(int j = 0; j < 2; j++){
        for(int k = i+1; k < n; k++){
            string s2 = v[k];
            char c = s2[0] , d = s2[1];
            if((a == c and b != d) || (a == d and b != c) || (a != c and b == d) || (a != d and b == c)){
                cnt++;
            }
            else{
                k = n - 1;
                j = 2;
            }
        }
    }
   }
   cout<<cnt<<endl;
}

int main() {
    fastIO;
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}