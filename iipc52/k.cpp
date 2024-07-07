#include<iostream>
using namespace std;

int solve(int arr[]){
    int r,l,i,sum=0;
    cin>>l>>r;
    for(i = l - 1 ; i < r ; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int n,q,i,l,r;
    cin>>n>>q;
    int arr[n];
    for(i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    while(q--){
        int result = solve(arr);
        cout<<result<<endl;
    }
}
