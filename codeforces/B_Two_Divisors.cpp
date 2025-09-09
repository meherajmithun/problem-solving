//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

void solve() {
    int a,b; cin>>a>>b;
    int n = b*b;
    if(a%2 == 0 and b%2 != 0) n = a*b;
    if(a%2 != 0 and b%2 == 0) n = a*b;
    if(a%2 == 1 and b%2 == 1) n = a*b;
    
    //if(n%a == 0) n /= a;
    cout<<n<<" ";
    while(1){
        vector<int>div;
        div.push_back(1);
        for(int i=2; i<=sqrt(n); i++){
            if(n%i == 0){
                div.push_back(i);
                if(n/i != i){
                    div.push_back(n/i);
                }
            }
        }
        for(auto u : div) cout<<u<<" "; cout<<endl;
        return;
        sort(div.begin() , div.end());
        if(div[div.size()-1] == b and div[div.size()-2] == a){
            cout<<n<<endl;
            return;
        }
        n /= a;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}