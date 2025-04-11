#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,i,j,k,add=0;
    cin>>a>>b>>c;
    for(i = 1 ; i <= a ; i++){
        for(j = 1 ; j <= b ; j++){
            for(k = 1 ; k <= c ; k++){
                double sum = 0;
                sum = i + j + k;
                double x = ceil(sum/2);
                add += x;
                add %= 1073741824;
            }
        }
    }
    cout<<add<<endl;
}