/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
//#define int long long
using namespace std;

void solve(){
    long long n; cin >> n;
    long long count = 0;
    if(n == 2){
        cout<<"NO"<<endl;
        return ;
    }
    else {
        for(long long i = 1; i * i <= n; i++){
            if(n % i == 0){
                count++;
                if(i != n / i) count++;
            }
        }
    }
    count -= 1;
    if(count % 2 != 0) cout<<"YES" <<endl;
    else cout<<"NO"<<endl;
}
int main(){
    fastIO;
    int T;
    cin >> T;
    while(T--){
         solve() ;
    }
    return 0;
}
