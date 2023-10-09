#include <bits/stdc++.h>
#define ll              long long

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
const int mod=1e9+7;
int powmod(ll  x,ll  n){
    /*if(n==0)return 1;
    else return (x*powmod(x,n-1)%mod);*/
    int ans=1;
    for(int i=1;i<=n;i++)ans=(1LL*ans*x)%mod;
    return ans;
}

int main()
{
    fast_in_out
    int n;cin>>n;
    ll  ans=powmod(10,n)-2*powmod(9,n)+powmod(8,n);
    ans%=mod;
    if(ans<0)ans+=mod;

    cout<<ans;
    return 0;
}
