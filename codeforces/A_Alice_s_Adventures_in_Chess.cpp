//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long
#define double long double;

void solve() {
    int n , a , b;
    cin >> n >> a >> b;
    string s ; cin >> s;
    int x = 0 , y = 0;
   // cout<<a<<" "<<b<<endl;
    //if(b>4) b = b%4;
    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < n; j++){
            if(s[j] == 'N' ) y += 1;
            else if (s[j] == 'E') x += 1;
            else if(s[j] == 'S') y -= 1;
            else if(s[j] == 'W')x -= 1;
            if(x == a and y == b){
                yes;
                return;
            }
        }
    }
    
    no;
}

int32_t main() {
    slow;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}