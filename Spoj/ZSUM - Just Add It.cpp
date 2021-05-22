#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define newline printf("\n");
ll big_mod(ll base,ll power,ll MOD)
{

    if(power==0) return 1;
    if(power%2==0)
    {
        ll ret=big_mod(base,power/2,MOD);
        return ((ret%MOD)*(ret%MOD))%MOD;
    }
    else return ((base%MOD)*(big_mod(base,power-1,MOD)%MOD))%MOD;
}
int main()
{
    ll n,k;
    ll MOD=10000007;
    while(scanf("%lld%lld",&n,&k)!=EOF&& n&& k)
    {
        ll a,b,c,d,Z;
        a=big_mod(n,n,MOD);
        b=big_mod(n,k,MOD);
        c=2*big_mod(n-1,n-1,MOD);
        d=2*big_mod(n-1,k,MOD);
        Z=((a+b)%MOD+(c+d)%MOD)%MOD;
        printf("%lld\n",Z);
    }
    return 0;
}
