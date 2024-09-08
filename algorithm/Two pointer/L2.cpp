
	//  Find the pair in Array Whose sum is closest to X

	//Array must be sorted in two pointer topic,Otherwise You will get a mara.
	//Time complexity O(n)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int k ; cin >> k;
    vector<int>v = {1,2,34,45,54,231};
    int i = 0, j = v.size() - 1;
    cout<<i<<j<<endl;
    int ans = INT_MAX;
    int ind1 , ind2;
    while( i < j){
        int sum = v[i] + v[j];

        if(abs(sum - k) < ans){
            ind1 = i;
            ind2 = j;
            ans = abs(sum - k);
        }
        if(sum < k) i++;
        else j--;
    }
    cout<<ind1<<" "<<ind2<<endl<<v[ind1]+v[ind2]<<endl;;
}
