#include <bits/stdc++.h>
#define ll unsigned long long
#define mod 1000000007ll
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    ll n,m,k,ans=1;
    cin>>n>>m>>k;
    if(n%2!=m%2&&k==-1){
        ans=0;
        cout<<ans<<'\n';
        return 0;
    }
    --n;--m;
    n%=(mod-1);m%=(mod-1);
    n*=m;
    n%=(mod-1);
    for(ll i=0;i<n;i++){
        ans=((ans%mod)<<1)%mod;
    }
    ans%=mod;
    if(ans<0)ans+=mod;
    cout<<ans<<'\n';
    return 0;
}
