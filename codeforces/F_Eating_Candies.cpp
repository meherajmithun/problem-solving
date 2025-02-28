#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin  >> n;
        vector<int>v(n);
        for(auto &u : v) cin >> u;
        int ans = 0,sum = 0;
        int sum_l=0,sum_r=0;
        bool gese = false;
        int cnt = 0;
        int l = 0, r = n-1;
        while(l < r){
            if(v[l] < v[r] and !gese){
                sum = 0;
                while(l < r){
                    sum += v[l];
                    if(sum == v[r]){
                        ans += l;
                        sum = 0;
                        r--;
                        break;
                    }
                    l++;
                }
            }
            else{
                cnt++;
                gese = true;
                sum_l+=v[l];
                sum_r+=v[r];
                if(sum_l==sum_r){
                    ans += cnt*2;
                    sum_l=0,sum_r=0;
                }
                l++,r--;
            }
        }
        cout<<ans<<'\n';
    }
}