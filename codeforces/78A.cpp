/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int main(){
    string s;
    int i , j , k,count = 0,m_count=0;
    for(i = 0; i < 3; i++){
        cin>>s;
        for(j = 0; j < s.size(); j++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                count++;
            }
        }
        if(i == 0 || i == 2){
            if(count == 5) m_count++;
        }
        else if(i == 1){
            if(count == 7) m_count++;
        }
    }
    if(m_count == 3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}