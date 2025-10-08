// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int a=0,b=0;
    for(int i=0; i<n; i++){
        if(s[i] == 'a') a++;
        else b++;
    }
    if(a == b){
        cout<<"0\n";
        return;
    }
    if(a == 0 or b == 0){
        cout<<"-1\n";
        return;
    }
    int t1=a,t2=b;
    int x =0,y=0;
    int l=0,r=0,ans = INT_MAX;
    bool f = 0;
    while(r<n){
        x = 0,y=0;
        if(s[r] == 'a') a--;
        else b--;
        if(a==b){
            while(l<=r and a==b){
               // cout<<x<<" "<<y<<endl;
                f=1;
                ans = min(ans,r-l+1);
                if(s[l] == 'a') {a--;}
                else {b--;}
                l++;
            }
            a=t1,b=t2;
            ans -= (x+y);
        }
        r++;
    }
    
    if(!f) ans = -1;
    cout<<ans<<endl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}