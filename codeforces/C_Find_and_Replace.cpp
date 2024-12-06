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
    int n ; cin >> n;
    string s ; cin >> s;
    bool flag = true;
    for(int i = 0; i < n; i++){
        if(flag== true){
        char a = s[i];
            for(int j = i; j < n; j++){
                char b = s[j];
                if(a == b){
                    s[j] = '1';
                }
            }
            flag = false;
        }
        else if(flag == false ){
            char a = s[i];
            for(int j = i; j < n; j++){
                char b = s[j];
                if(a == b){
                    s[j] = '0';
                }
            }
            flag = true;
        }
    }
    cout<<s<<endl;
    for(int i = 1; i < n; i++){
        if(s[i-1] == s[i]){
            no;
            return;
        }
    }
    yes;
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