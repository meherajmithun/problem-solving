#include <bits/stdc++.h>
using namespace std;

const long double pi = acos(-1);
//#define int long long
#define nl '\n'
#define all(x) (x).begin(), (x).end()

void testCase(){
    int n; cin>>n;

    vector<int> vi(n);
    for(int &x : vi) cin>>x;

    //set<pair<bool, int>> st;
    set<int> st;
    for(int i=1; i<=n; i++){
        st.emplace(i);
    }
    
    for(int x : vi){
        //cout<<*st.find(x)<<endl;
        auto it = st.find(x);
        cout<<*it<<endl;
        if(it == st.end()){
            //cout<<*st.begin() <<' ';
            st.erase(st.begin());
            continue;
        }

        //cout<<x <<' ';
        st.erase(it);
    }
    cout<<nl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) testCase();
    return 0;
}