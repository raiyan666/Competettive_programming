#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define ll              long long

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
ll arr[200005];
const int mod=1e9+7;
int main()
{
    ll brr[200005];
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    int t;cin>>t;
    ll ans=0,sum=0;
    for(int i=1;i<=t;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i=1;i<=t;i++){
        brr[i]=sum-arr[i];
        sum-=arr[i];
    }
    for(int i=1;i<=t;i++){
        ans=ans%mod+((arr[i]%mod)*(brr[i]%mod))%mod;
    }
    ans%=mod;
    if(ans<0)ans+=mod;
    cout<<ans<<'\n';
    return 0;
}
