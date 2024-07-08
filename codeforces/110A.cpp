/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    while(n > 0){
        if(n % 10 == 4){
            n = n/10;
            count++;
        }
        else if(n % 10 == 7){
            n = n/10;
            count++;
        }
        else if(n % 10 == 47){
            n = n/10;
            count++;
        }
        else if(n % 10 ==744){
            n = n/10;
            count++;
        }
    }
    if(count == 4 || count == 7 || count == 47 || count == 744){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

}
