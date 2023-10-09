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

    vi Prime;
    int n= 50000001;
    vector <char> mark(50000002,false);
    //prime_sieve if mark[i]=true then i is not prime

    int i,j,limit=sqrt(n*1)+2;
    mark[1]=true;
    for(i=4;i<=n;i+=2) mark[i]=true;
    //Prime.push_back(1);
    Prime.push_back(2);

    for(i=3;i<=n;i+=2)
        if(!mark[i])
    {
        Prime.push_back(i);
        if(i<=limit)
        {
            for(j=i*i;j<=n;j+=(2*i))
            {
                mark[j]=true;
            }
        }
    }

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int last_prime,i=0;
        scanf("%d",&last_prime);
        /*for( i=0;i<Prime.size()&&Prime[i]<=last_prime;i++)
        {

        }*/
        printf("%d",Prime[last_prime-1]);
        nl;
    }
    return 0;
}
