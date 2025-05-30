#include <bits/stdc++.h>
#define ll              long long int
#define SL(n)           scanf("%lld",&n)
#define LF              double
#define SF(n)           scanf("%llf",&n)

#define vi              vector<int>
#define pb              push_back
#define mp              make_pair

#define ff              first
#define ss              second

#define FOR(i,s,e)      for( LL i=s;i<=e;i++)
#define RFOR(i,e,s)     for( LL i=e;i>=s;i--)

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl              printf("\n")
using namespace std;
ll arr[400005];
ll gcd(ll x,ll y)
{
    if(x==0)return y;
    return gcd(y%x,x);
}
ll divisors(ll n)
{
    ll sol=0;
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)sol+=1;
            else sol+=2;
        }
    }
    return sol;
}
int main()
{
    //freopen("FILE_NAME_FOR_INPUT","r",stdin);
    //freopen("FILE_NAME_FOR OUTPUT","w",stdout);
    ll n;
    scanf("%lld",&n);
    for(ll i=0;i<n;++i)
    {
        scanf("%lld",&arr[i]);
    }
    ll m=arr[0];
    for(ll i=1;i<n;++i)
    {
        m=gcd(m,arr[i]);
    }
    ll ans=divisors(m);
    printf("%lld\n",ans);
    return 0;
}
