//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007
vector<int> dx = {0, 1, 0, -1};
vector<int> dy = {1, 0, -1, 0};
vector<char> dir = {'R', 'D', 'L', 'U'};


void solve() {
    int n,m; cin>>n>>m;
    char grid[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>grid[i][j];
        }
    }
    int visited[n][m];
    memset(visited, 0, sizeof(visited));
    string s;
    bool on = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] == 'A') {on = 1;
                //cout<<i<<" "<<j<<endl;
            }
            if(on){
                                if(on and grid[i][j] == 'B'){
                    print(s);
                    return;
                }
                if(i-1 >= 0 or j-1 >= 0){
                    if(on and grid[i-1][j-1] == 'B'){
                    print(s);
                    return;
                }
                queue<pair<int,int>>q;
                q.push({i, j});
               // cout<<i<<" "<<j<<"->";
                while(!q.empty()){
                    pair<int,int> u = q.front();
                    q.pop();
                    int x = u.first;
                    int y = u.second;
                    for(int k=0; k<4; k++){
                        int r = x+dx[k];
                        int c = y+dy[k];
                        if(r>=0 and r<n and c>=0 and c<m){
                            if(visited[r][c] == 0 and grid[r][c] == '.'){
                                //wcout<<r<<" "<<c<<endl;
                                s += dir[k];
                                q.push({r,c});
                                visited[r][c]= 1;
                                
                            }
                            if(on and grid[r][c] == 'B'){
                                print(s);
                                return;
                            }
                        }
                    }
                    // if(on and grid[r][c] == 'B'){
                    //     print(s);
                    //     return;
                    // }
                }
                }
                if(grid[i][j] != '.' or visited[i][j] == 1) continue;
            }
        }
    }
    print(s);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      
    int tc = 1; //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}