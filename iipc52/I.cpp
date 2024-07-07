#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double x = (c - a);
    x = (x*x);
    double y = (d - b);
    y = (y*y);

    double result = sqrt(x+y);

    cout<<result;


}
