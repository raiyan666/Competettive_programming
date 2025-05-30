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
    ll high=lim,low=0,mid;
    while(low<=high){
        mid=(high+low)/2;
        if(x==arr[mid]){
            return 1;
        }
        else if(x<arr[mid])high=mid-1;
        else low=mid+1;
        //prllf("low %lld\thigh %lld\n",low,high);
    }
    return 0;
}
using namespace std;
int main()
{

    ll n,q,x,f=1,s=1,ans=0;
    scanf("%lld",&n);
    ll arr[100000], brr[50000];
    scanf("%lld",&arr[0]);
    for(ll i=1;i<n;i++){
        scanf("%lld",&x);
        if(x!=arr[i-1]){
            arr[f]=x;
            f++;
        }
    }
     scanf("%lld",&q);
    scanf("%lld",&brr[0]);
    s=1;
     for(ll i=1;i<q;i++){
        scanf("%lld",&x);
        if(x!=brr[i-1]){
            brr[s]=x;
            s++;
        }
    }
    for(ll i=0;i<s;i++){
        ans+=binarysearch(brr[i],arr,f-1);

    }
     printf("%lld\n",ans);

    return 0;
}
