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

int32_t main() {
    slow;
    int t;
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        int n ; cin >> n;
        bool flag = true;
        for(int i = 0; i < n; i++){
            string a , b ;
            cin >>a >> b;
            if(b != "wine"){
                flag = false;
            }
        }
        if(flag) cout<<"Case "<<tc<<": Yes"<<endl;
        else cout<<"Case "<<tc<<": No"<<endl;
    }
    return 0;
}