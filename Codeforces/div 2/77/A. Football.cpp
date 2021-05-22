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
int main()
{
    fast_in_out
    string a;
    cin>>a;
    int m=0;
    //bool state=false;
    for(int i=1,x=0;i<(int)(a.size());i++)
    {
        if(a[i]==a[i-1])x++;
        if(x>=m)m=x;
        if(a[i]!=a[i-1])x=0;
    }
    if(m>=6)printf("YES");
    else printf("NO");
    nl;
    return 0;
}
