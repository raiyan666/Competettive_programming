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
#define nl              printf("\n");
using namespace std;
int main()
{
    int a,b,c,d;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    double f1=c/a;
    double ans=-d/f1;
    printf("%.6lf\n",ans);
    return 0;
}

