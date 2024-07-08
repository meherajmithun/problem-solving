/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
#include<algorithm>
using namespace std;

void loser(){
    int n,count=0,a;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) cin>>arr[i];
    sort(arr , arr + n);
    for(int i = 0 ; i < n ; i++){
        if(arr[i+1] == arr[i]){
            a = arr[i];
            count++;
            if(count == 3){
                cout<<a<<endl;
                break;
            }
        }
    }
    if(count < 3) cout<<-1<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        loser();
    }
}
