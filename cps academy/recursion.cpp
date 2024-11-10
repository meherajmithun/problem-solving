#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    int res;
    if( n == 0) return 0;
    if(n == 1) return 1;
    else res = fibo(n-1) + fibo(n-2);
    return res;
}
int main(){
    int n ; cin >> n;
    cout<<fibo(n)<<" ";
}