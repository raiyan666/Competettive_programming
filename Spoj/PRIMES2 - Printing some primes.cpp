#include <bits/stdc++.h>
#define ll long long
#define vi vector <ll>

using namespace std;

#define mx  1000000000
ll status[mx>>6];
vi Prime;

bool checkbit(ll n,ll position)
{
    return(bool)(n & (1<<position));
}
ll setbit(ll n,ll position)
{
    n=n|(1<<position);
    return n;
}

int main()
{
    ll i,j, limit=(ll)(sqrt(mx))+2;
    //status[0]=setbit(status[0],1&31);
    Prime.push_back(2);
    //for(i=4;i<mx;i+=2) setbit(status[i>>5],i&31);

    for(i=3;i<=mx;i+=2){
        if(!checkbit(status[i>>6],(i>>1)&31)){
            Prime.push_back(i);
            if(i<=limit)
            for(j=i*i;j<=mx;j+=(i<<1)){
                status[j>>6]=setbit(status[j>>6],(j>>1)&31);
            }
        }
    }
    for(ll k=0;k<=(int)Prime.size();k+=500)
    {
        printf("%lld\n",Prime[k]);

   }
    return 0;
}
