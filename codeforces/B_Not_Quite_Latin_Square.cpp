/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define ll long long
#define no (cout << "NO\n")
#define yes (cout << "YES\n")

string solve(){
    vector<string>s(3);
    for(int i = 0 ; i < 3; i++) cin v[i];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(s[i][j] == '?'){
                if(j == 1){
                    if(s[j-1] =='A' and s[j+1] == 'B') return "C";
                    else if(s[j-1] == 'A' and s[j+1] == 'C') return "B";
                    else return "A";
            }
            else if(j == 0){
                    if(s[j-1] =='A' and s[j+1] == 'B') return "C";
                    else if(s[j-1] == 'A' and s[j+1] == 'C') return "B";
                    else return "A";
            }
            else {
                    if(s[j-1] =='A' and s[j+1] == 'B') return "C";
                    else if(s[j-1] == 'A' and s[j+1] == 'C') return "B";
                    else return "A";
            }
        }
    }

}
}

int main(){
    fastIO;
    int T;
    cin >> T;
    while(T--){
         cout<<solve()<<endl;
    }
    return 0;
}