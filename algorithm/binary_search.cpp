#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    
    int l = 0; int r = n - 1;
    int key ; cin>> key;
    int mid;
    while( l <= r){
        mid = (l + r) / 2;
        if(v[mid] == key){
            cout<<"Found"<<endl;
            return 0;
        }
        else if( v[mid] > key){
            r = mid - 1;
        }
        else {
            mid = l + 1;
        }
    }
    cout<<"Not Found"<<endl;
    
}
