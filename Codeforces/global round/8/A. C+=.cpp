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
int biggest(int x,int y)
{
    if(x>y)return x;
    else return y;
}
int fun(int a,int b,int n)
{
    int temp=0,ans=0;
    while(temp<=n)
    {
        temp=a+b;
        int big=biggest(a,b);
        a=temp;
        b=big;
        ans++;
    }
    return ans;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int a,b,n;
       scanf("%d%d%d",&a,&b,&n);
       int ans=fun(a,b,n);
       printf("%d\n",ans);
    }
    return 0;
}
