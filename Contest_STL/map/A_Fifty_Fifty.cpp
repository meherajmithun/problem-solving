#include<bits/stdc++.h>
using namespace std;

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
          
int main(){
    slow();
    int n; cin >> n;
    map<string,int>mp;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        mp[s]++;
        if(mp[s] == 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

}