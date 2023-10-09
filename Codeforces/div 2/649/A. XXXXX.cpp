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
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,sum=0,l=-1,r;
        scanf("%d%d",&n,&x);

        for(int i=0;i<n;i++){
            int a;
            scanf("%d",&a);
            if(a%x){
                if(l==-1)l=i;
                r=i;
            }
            sum+=a;
        }
        if(sum%x)printf("%d\n",n);
        else if(l==-1)printf("-1\n");
        else printf("%d\n",n-min(l+1,n-r));
        }
    return 0;
}
