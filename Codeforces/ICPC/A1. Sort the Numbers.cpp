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
vector<int>so;
vector<int>::iterator it;
int main()
{
    int n,s;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        scanf("%d",&s);
        so.pb(s);
    }
    sort(so.begin(),so.end());
    for(it=so.begin();it!=so.end();it++)printf("%d ",*it);
    nl;
    return 0;
}
