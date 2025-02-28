#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        string s, s2;
        cin >> s >> s2;
        int n = (int)s.size();
        int aiche = true;
        for(int i=0; i<n; i++){

            if(!aiche){
                if(s[i] > s2[i]){
                    swap(s[i] , s2[i]);
                }
            }
            else {
                if(s[i] < s2[i]){
                    swap(s[i] , s2[i]);
                }
                aiche = false;
                
            }
        }
    
        cout<<s<<'\n'<<s2<<'\n';
    
    }
}