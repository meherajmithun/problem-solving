#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,s2;
    cin  >> s >> s2;
    int cost = 0;
    int line_number = 0;
    int mx = s.size()-s2.size()+1;
    for(int i=0; i<mx; i++){
        line_number++;
        bool paisi = true;
        for(int j=0; j<(int)s2.size() and paisi; j++){
            if(s[i+j] != s2[j]){
                paisi = false;
            }
            cost++;
        }
        if(paisi){
            cout<<line_number<<" ";
            cout<<cost<<endl;
            return 0;
        }
    }
    cout<<cost<<endl;
}