#include <iostream>

#define ull long long
using namespace std;
int main()
{
    int t;
    ull MOD=1000000007;
    scanf("%d",&t);
    while(t--)
    {
        int N;
        ull ans=1;
        scanf("%d",&N);
        for(ull i=0;i<N;i++)
        {
            ull a;
            scanf("%lld",a);
            ans=((ans%MOD) * (a%MOD) %MOD);
        }
        printf("%lld\n",ans);
    }
    return 0;
}
