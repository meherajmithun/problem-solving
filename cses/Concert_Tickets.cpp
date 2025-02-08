#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,m;
    cin >> n >> m;
    multiset<ll>ticket;
    for(int i =0; i<n; i++){
        ll a; cin >> a;
        ticket.insert(a);
    }
    // for(auto u : ticket) cout<<u<<" ";
    //     cout<<endl;
    for(int i=0; i<m; i++){
        ll a; cin >> a;
        auto it = ticket.upper_bound(a);
        if(it == ticket.begin()){
            cout<<-1<<endl;
        }
        else{
            it--;
            cout<<*it<<endl;
            ticket.erase(it);
        }
    }
}