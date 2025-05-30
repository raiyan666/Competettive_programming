#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<ll>
#define pb              push_back

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    int t;
    ll x;cin>>t;
    ll cnt=0,maxim=0;
    vi arr;
    for(int i=1;i<=t;i++){
        cin>>x;
        arr.pb(x);
        maxim=max(maxim,x);
    }
    ll cur=arr[0];
    for(int i=1;i<t;i++){
        if(cur==arr[i]&&cur!=maxim){
            cnt++;
        }
        else{
            cur=arr[i];
        }
    }
    ll ans=(maxim+maxim)+cnt;
    cout<<ans<<'\n';
    return 0;
}
