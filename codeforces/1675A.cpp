/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

string solve(){
    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    int m = c/2;
    if((a+m >= x) && (b +m >= y)) return "YES";
    else return "NO";
}
int main(){
    optimize();
    int T;
    cin >> T;
    while(T--){
        cout << solve() << endl;
    }
}