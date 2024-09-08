
	//Find the pair whose sum is equal to x
    //Array must be sorted in two pointer topic,Otherwise You will get a mara.
	//Time complexity O(n)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int k ; cin >> k;
    vector<int>v = {1,2,3,4,5,6,7,8,9,10};
    int i = 0, j = v.size() - 1;
    while(i < j){
        int ans = v[i] + v[j];
        if(ans > k){
            j--;
        }
        else if( ans < k){
            i++;
        }
        else{
            cout<<"YES"<<endl;
            cout<<i<<j<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
