#include<bits/stdc++.h>
using namespace std;
#define ll long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int main(){
    slow();
    int n,m; cin >> n >> m;
    multiset<ll>st;
    for(int i=0; i<n; i++){
        ll a; cin >> a;
        st.insert(a);
    }
    //reverse(st.begin() , st.end());
    for(int i=0; i<m; i++){
        ll a; cin >> a;
        auto pointer = st.upper_bound(a);
        if(pointer == st.begin()){
            cout<<-1<<endl;
        }
        else{
            pointer--;
            cout<<*pointer<<endl;
            st.erase(pointer);
        }
    }
}