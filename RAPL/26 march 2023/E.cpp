#include <iostream>
using namespace std;
#define newline printf("\n");
#define ll long long
ll big_mod1(ll base,ll power,ll MOD)
{

    if(power==0) return 1;
    if(power%2==0)
    {
        ll ret=big_mod1(base,power/2,MOD);
        return ((ret%MOD)*(ret%MOD))%MOD;
    }
    else return ((base%MOD)*(big_mod1(base,power-1,MOD)%MOD))%MOD;
}

int main()
{
    ll base,power,MOD;
    while(scanf("%lld%lld%lld",&base,&power,&MOD)!=EOF)
    {
        ll ans=big_mod1(base,power,MOD);
        printf("%lld",ans%MOD);
        newline;
    }
    return 0;
}
