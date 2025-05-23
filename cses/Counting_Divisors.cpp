#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin>>n;
    while(n--){
        int a; cin>>a;
        int cnt = 0;
        for(int i=1; (i*i) <= a; i++){
            if(a%i == 0){
                cnt++;
                if(a/i != i) cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}