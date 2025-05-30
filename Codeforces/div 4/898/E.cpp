#include <bits/stdc++.h> 
#define ll long long int
#define nl cout<<endl;


using namespace std;
bool good(ll x,vector<ll>arr,ll n,ll lim){
    ll sum=0;
    //arr.sort();
    for(ll i=0;i<arr.size();i++){
        if(arr[i]<x)sum+=(x-arr[i]);
    }
    return sum>lim;

}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll>arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        ll l=0;//bad number
        ll r=2e10;//good number
        while(r>l+1){
            ll m=(l+r)/2;
            if(good(m,arr,n,x)){
                r=m;
            }
            else l=m;
        }
        cout<<l<<'\n';
        
    }
    return 0;
}