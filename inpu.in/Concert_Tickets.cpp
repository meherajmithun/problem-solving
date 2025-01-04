#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void optimize(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
}

int main(){
    optimize();
    int n,m ;
    cin >> n >> m;
    vector<ll>ticket(n),customer(m);
    // for(auto u : ticket) cin >> u;
    // for(auto u : customer) cin >> u;
    for(int i = 0; i < n; i++) cin >> ticket[i];
    for(int i = 0; i < m; i++) cin >> customer[i];
    sort(ticket.begin() , ticket.end());
    // for(auto u : ticket) cout<<u<<" ";
    // cout<<endl;
    for(int i=0; i<m; i++){
        int idx = lower_bound(ticket.begin(),ticket.end(),customer[i])-ticket.begin();
        //cout<<idx<<endl;
        if(ticket[idx] <= customer[i]){
            cout<<ticket[idx]<<endl;
            ticket[idx] = -1;
        }
        else if(ticket[idx-1] <= customer[i] and idx != 0){
            cout<<ticket[idx-1]<<endl;
            ticket[idx-1] = -1;
        }
        else{
            cout<<-1<<endl;
        }
        sort(ticket.begin(),ticket.end());
    }
}