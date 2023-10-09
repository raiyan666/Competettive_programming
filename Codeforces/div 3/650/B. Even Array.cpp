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
        int n;
        scanf("%d",&n);
        int even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            int temp;
            scanf("%d",&temp);
            if(temp%2!=i%2){
                if(i%2==0)even++;
                else odd++;
            }
        }
        if(even!=odd)printf("-1\n");
        else printf("%d\n",odd);
    }
    return 0;
}
