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

int32_t main() {
    slow;
    int tc;
    cin >> tc;
    for(int i = 1 ; i <= tc; i++){
        vi v(3);
        for(auto &u : v) cin >> u;
        sort(v.rbegin() , v.rend());
        
        if(v[0] == 6){
            if(v[1] == 3 and v[2] == 0) cout<<"Case "<<i<<": perfectus"<<endl;
            else if(v[1] == 1 and v[2] == 1) cout<<"Case "<<i<<": perfectus"<<endl;
            else cout<<"Case "<<i<<": invalidum"<<endl;
        }
        else if(v[0] == 4){
            if(v[1] == 3 and v[2] == 1) cout<<"Case "<<i<<": perfectus"<<endl;
            else if(v[1] == 2 and v[2] == 1) cout<<"Case "<<i<<": perfectus"<<endl;
            else if(v[1] == 4 and v[2] == 0) cout<<"Case "<<i<<": perfectus"<<endl;
            else cout<<"Case "<<i<<": invalidum"<<endl;
        }
        else if(v[0] == 3 and v[1] == 3 and v[2] == 3) cout<<"Case "<<i<<": perfectus"<<endl;
        else if(v[0] == 2 and v[1] == 2 and v[2] == 2) cout<<"Case "<<i<<": perfectus"<<endl;
        else cout<<"Case"<<i<<": invalidum"<<endl;
    }
}