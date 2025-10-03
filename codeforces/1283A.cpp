
#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n,m,ans;
    cin >> n >> m;
    n = 24 - n;
    ans = n * 60 - m;
    return ans;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T;
  cin >> T;
  while(T--){
      cout<<solve()<<endl;
  }
}

