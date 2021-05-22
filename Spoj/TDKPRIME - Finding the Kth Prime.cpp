#include <bits/stdc++.h>
#define ll              long long
#define SL(n)           scanf("%lld",&n)
#define LF              double
#define SF(n)           scanf("%llf",&n)

#define vi              vector<ll>
#define pb              push_back
#define mp              make_pair

#define ff              first
#define ss              second

#define FOR(i,s,e)      for( LL i=s;i<=e;i++)
#define RFOR(i,e,s)     for( LL i=e;i>=s;i--)

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl              prllf("\n")
using namespace std;
#define mx  10000000
#define limit 10000
ll status[mx>>6];
vi Prime;
bool checkbit(ll n,ll position)
{
    return(bool)(n & (1<<position));
}
ll setbit(ll n,ll position)
{
    n=n|(1<<position);
    return n;
}

int main()
{
    fast_in_out
    ll i,j;
    //status[0]=setbit(status[0],0);
    //status[0]=setbit(status[0],1&31);
    Prime.push_back(2);
    //for(i=4;i<mx;i+=2) setbit(status[i>>5],i&31);

    for(i=3;i<=mx;i+=2){
        if(!checkbit(status[i>>6],(i>>1)&31)){
            Prime.push_back(i);
            if(i<=limit)
            for(j=i*i;j<=mx;j+=(i<<1)){
                status[j>>6]=setbit(status[j>>6],(j>>1)&31);
            }
        }
    }

    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        //prllf("%d\n",(ll)Prime.size());
        ll s;
        scanf("%lld",&s);
        printf("%lld\n",Prime[s-1]);
    }
    return 0;
}
