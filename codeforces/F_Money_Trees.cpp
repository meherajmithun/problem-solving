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

bool cmp(const pair < int , int > &p1 , const pair < int , int  > &p2){
    if (p1.first > p2.first) return 1;
    else if (p1.first == p2.first) return (p1.second < p2.second);
    else return 0;
}

void solve() {
   int n,k; cin>>n>>k;
   vector<int>fruit(n),height(n);
   for(auto &u : fruit) cin>>u;
   for(auto &u : height) cin>>u;
   vector<pair<int,int>>vp;
   for(int i=0; i<n; i++){
        vp.push_back({height[i],fruit[i]});
   } 
   sort(vp.begin() , vp.end() ,cmp);
   for(auto u : vp) cout<<u.first<<" ";
   cout<<endl;
   for(auto u : vp) cout<<u.second<<" ";
   cout<<endl;
   int l=0,r=0,sum=0,mx = -1;
   while(l<n-1){
        //cout<<sum<<" ";
        if(vp[l].first % vp[l+1].first != 0){
            sum = 0;
            mx = max(mx,r-l);
            l++;
            continue;
        }
        r = l;
        while(r<n-1 and vp[r].first%vp[r+1].first == 0 and sum < k){
            sum += vp[r].second;
            r++;
            //cout<<sum<<" "; 
        }
        mx = max(mx,r-l);
//        cout<<mx<<endl;
        sum = 0;
        l++;
   }
   mx = max(mx,r-l);
   if(mx == -1) mx = 0;
   print(mx);
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