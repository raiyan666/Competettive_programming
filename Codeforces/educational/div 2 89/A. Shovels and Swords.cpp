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
        int sticks,dm;
        scanf("%d%d",&sticks,&dm);
        int mx=max(sticks,dm);
        int mn=min(sticks,dm);
        if(mx!=0 &&mn!=0){
            if(mx>=(2*mn)){
            printf("%d",mn);
            nl;
        }
        else{
            int avg=(sticks+dm)/3;
            printf("%d",avg);
            nl;
        }
        }
        else{
            printf("0");
            nl;
        }

    }
    return 0;
}
