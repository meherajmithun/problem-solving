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

        int n,m,x;
        cin>>n>>m;
        vector<int>v[n+4];
        vector<int>ans[n+3];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>x;
                v[i].push_back(x);
            }
        }
        for(int i=0;i<n;i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        for(int i=0;i<m;i++)
        {
            int mn=INT_MAX;
            int ind=-1;
            for(int j=0;j<n;j++)
            {
                if(v[j][0]<mn)
                {
                    mn=v[j][0];
                    ind=j;
                }
            }
            for(int j=0;j<n;j++)
            {
                if(j==ind)
                {
                    ans[j].push_back(v[j][0]);
                    v[j].erase(v[j].begin());
                }
                else
                {
                    ans[j].push_back(v[j][v[j].size()-1]);
                    v[j].pop_back();
                }
            }
        }
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
           cout<<endl;
        }
   
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