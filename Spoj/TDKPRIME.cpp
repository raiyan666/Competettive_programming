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
#define mx 100000000
int status[(mx>>6)];
vector<int>Prime;
bool checkbit(int n,int position)
{
    return (bool)(n & (1<<position));
}
int setbit(int n,int position)
{
    n=n|(1<<position);
    return n;
}

int main()
{

    //vector <char> mark(500002,false);
    //prime_sieve if mark[i]=true then i is not prime

    int i,j,limit=sqrt(mx*1)+2;
    //mark[1]=true;
    //for(i=4;i<=n;i+=2) mark[i]=true;
    //Prime.push_back(1);
    Prime.push_back(2);

    for(i=3;i<=mx;i+=2)
       if(!checkbit(status[i>>6],(i>>1)&31))
    {
        Prime.push_back(i);
        if(i<=limit)
        {
            for(j=i*i;j<=mx;j+=(i<<1))
            {
                status[j>>6]=setbit(status[j>>6],(j>>1)&31);
            }
        }
    }

    /*int t;
    scanf("%d",&t);
    while(t--)
    {*/
        int last_prime;//,i=0;
        scanf("%d",&last_prime);

        printf("%d\n",Prime[last_prime-1]);
        //nl;
    //}
    return 0;
}
