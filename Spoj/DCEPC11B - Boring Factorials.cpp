#include <iostream>
using namespace std;
#define ll long long
int main()
{
    ll t,n,p;
    scanf("%lld",&t);
    while(t--)
    {
        ll ans=-1%p,ans2=1;
        if(ans<1)ans+=p;
        scanf("%lld%lld",&n,&p);
        if(p<n)
        {
            for(ll loop=n;loop<p;loop--)
            {
                ans=((ans%p)*(loop%p))%p;
            }
        }

        else{
            for(ll loop=n+1;loop<p;loop++)
            {
                ans2=((ans2%p)*(loop%p))%p;
            }
            ans=(ans/ans2)%p;
            }
        printf("%lld\n",ans);
    }
    return 0;
}
