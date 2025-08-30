#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N= 2e6+9, mod= 1e9+7;
int fac[N], inv[N], facinv[N];

void pre_calculate()// pre calculate the factorial and the invrse factorial
{
    fac[0] = 1;
    for (int i = 1; i < N; i++) fac[i] = 1LL * i * fac[i - 1] % mod;
    inv[1] = 1;
    for (int i = 2; i < N; i++ )
    {
        inv[i] = (-(1LL * mod / i) * inv[mod % i] ) % mod;
        inv[i] = (inv[i] + mod) % mod;
    }
    facinv[0] = 1;
    for (int i = 1; i < N; i++) facinv[i] = 1LL * inv[i] * facinv[i - 1] % mod;
}
// this is a straight stars and bars problem where children is bars(kind) and apples are stars(total)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    pre_calculate();
    int n, m; cin>> n>> m;

    ll ans= 1;
    ans= 1LL * ans * fac[m+n-1]%mod * facinv[n-1]%mod * facinv[m] % mod;  //  (m+n-1)C(n-1)

    cout<< ans % mod << endl;
}
//https://cses.fi/problemset/task/1716/
