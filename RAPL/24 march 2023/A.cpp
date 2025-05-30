#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t,n,q,l,r,k;
    cin>>t;
    while(t--){
        cin>>n>>q;
        ll arr[n+1],sum2=0;
        arr[0]=0;
        for(ll i=1;i<=n;i++){
            cin>>arr[i];
            arr[i]+=arr[i-1];
        }
        sum2=arr[n];
        while(q--){
            ll ext=0,sum=sum2;
            cin>>l>>r>>k;
            ext=arr[r]-arr[l-1];
            //cout<<ext<<'\t';
            sum-=ext;
            sum+=((r-l+1)*k);
            if(sum%2)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}