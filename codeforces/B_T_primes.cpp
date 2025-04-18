#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int query; cin>>query;
    while(query--){
        int n; cin>>n;
        double a = sqrt(n);
        if(n == 1){
            cout<<"NO"<<endl;
        }
        else if(a-(int)a) cout<<"NO"<<endl;
        else{
            int b = (int)a;
            bool gese = true;
            for(int i=2; i*i <= b; i++){
                if(b%i == 0){
                    gese = false;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(gese) cout<<"YES"<<endl;
        }
    }
}