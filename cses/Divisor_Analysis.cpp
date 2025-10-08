//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
vector<int> val;

int modulo(int a, int b)
{
    if (b == 0)
        return 1;
    int k = modulo(a, b / 2);
    if (b & 1)
    {
        return (a * ((k * k) % mod)) % mod;
    }
    return (k * k) % mod;
}
void solve()
{
    int a, b;
    cin >> a >> b;
    int res = modulo(a, b);
    val.push_back(res);
    //    print(val);
}

int divisor(int n)
{
    int a = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            a++;
            if (n / i != i)
                a++;
        }
    }
    return a;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // val = 1;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    for (auto u : val)
        cout << u << " ";
    cout << endl;
    int a = 1;
    for (auto u : val)
    {
        a = (a * u) % mod;
    }
    cout << divisor(a);
    return 0;
}