#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<ll>
#define pb              push_back
#define mp              make_pair

#define ff              first
#define ss              second

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
ll binarysearch(ll x,ll arr[],ll lim){
    ll high=lim,low=0,mid,pos=-1;
    while(low<=high){
        mid=(high+low)/2;
        if(x==arr[mid]){
            pos=mid;
            high=mid-1;
        }
        else if(x<arr[mid])high=mid-1;
        else low=mid+1;
        //prllf("low %lld\thigh %lld\n",low,high);
    }
    return pos;
}
using namespace std;
int main()
{

    ll n,q;
    scanf("%lld %lld",&n,&q);
    ll arr[n];
    for(ll i=0;i<n;i++)scanf("%lld",&arr[i]);
    for(ll i=0;i<q;i++){
        ll x;
        scanf("%lld",&x);
        ll ans=binarysearch(x,arr,n-1);
        printf("%lld\n",ans);

    }

    return 0;
}
