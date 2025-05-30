#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<int>
#define pb              push_back
#define mp              make_pair

#define ff              first
#define ss              second

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
ll i=0;
ll binarysearch(ll x,ll arr[]){
    ll high=i,low= 0,mid;
    while(low<=high){
        mid=(high+low)/2;
        if(x==arr[mid])return mid;
        else if(x<arr[mid])high=mid-1;
        else low=mid+1;
    }
    if(x<arr[mid])return mid-1;
    return mid;

}

using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    ll t,x,n=45000;
    cin>>t;
    ll arr[45000];

    for(int j=0;j<n;j++)arr[j]=j;
    i=1;
    while(arr[i]<=1000000000){
        arr[i]=arr[i-1]+i;
        i++;
    }
    //for(int j=0;j<=i;j++)cout<<arr[j]<<'\t';
    while(t--){
        cin>>x;
        cout<<binarysearch(x,arr)<<endl;
    }
    return 0;
}
