#include<bits/stdc++.h>
using namespace std;

int main(){
    int  n ; cin >> n;
    bool found = false;
    while(n--){
        string s ; cin >> s;
        if(s == "and" or s == "not" or s == "that" or s == "the"  or s == "you"){
            found = true;
        }
    }
    if(found) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}