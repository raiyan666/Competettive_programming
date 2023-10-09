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

#define FOR(i,s,e)      for( LL i=s;i<=e;i++)
#define RFOR(i,e,s)     for( LL i=e;i>=s;i--)

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl              printf("\n")
using namespace std;
int maxi(int point,int time)
{
    int p=(point/10)*3;
    int t=(point/250)*(250-time);
    return max(p,t);
}
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int misha=maxi(a,c);
    int vasaya=maxi(b,d);
    if(misha>vasaya)printf("Misha\n");
    else if(vasaya>misha)printf("Vasya\n");
    else printf("Tie\n");
    return 0;
}
