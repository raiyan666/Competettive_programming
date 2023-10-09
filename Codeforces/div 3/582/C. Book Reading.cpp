#include <bits/stdc++.h>
#define ll              long long
#define SL(n)           scanf("%lld",&n)
#define LF              double
#define SF(n)           scanf("%llf",&n)

#define vi              vector<int>
#define pb              push_back
#define mp              make_pair

#define ff              first
#define ss              second

#define FOR(i,s,e)      for( ll i=s;i<=e;i++)
#define RFOR(i,e,s)     for( ll i=e;i>=s;i--)

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl              printf("\n")
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n,m;
        SL(n);SL(m);
        ll sum=0;
        for(int i=1;i<=10;++i)sum+=i*m%10;
        sum=(n/m)/10*sum;
        for(int i=1;i<=(n/m)%10;++i)sum+=i*m%10;

        printf("%lld",sum);
        nl;
    }
    return 0;
}
