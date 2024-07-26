#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#endif
#define nn '\n'
#define ff first
#define ss second
#define pb push_back
#define pq priority_queue
#define no (cout << "NO\n")
#define yes (cout << "YES\n")
#define all(x) x.begin(), x.end()
#define mem(x,y) memset((x),(y),sizeof(x))

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef std::vector<ll> vl;
typedef std::vector<int> vi;
typedef std::pair<ll, ll> pll;
typedef std::pair<int, int> pii;
typedef std::vector<pair<ll, ll>> vll;
typedef std::vector<pair<int, int>> vii;
template <typename T>
using minHeap = priority_queue<T, vector<T>, greater<T>>;

void solve(int arr[]){
    int q,r,sum=0;
    cin>>q>>r;
    for(int i = q - 1 ; i < r ; i++){
        sum = sum + arr[i];
    }
    cout<<sum<<endl;
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    while(m--){
        solve(arr);
    }
}
