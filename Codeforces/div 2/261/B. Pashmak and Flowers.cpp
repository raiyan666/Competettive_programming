#include <bits/stdc++.h>
#define ll              long long
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int arr[200005];
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    ll t,Max=0,Min=0;cin>>t;
    for(ll i=0;i<t;i++)cin>>arr[i];
    sort(arr,arr+t);
    ll Maxi=arr[t-1],Mini=arr[0];
    for(ll i=0;i<t;i++){
        if(arr[i]==Maxi)Max++;
        else if(arr[i]==Mini)Min++;
    }
    if(Maxi==Mini){
        Max*=(Max-1);
        Max/=2;
        Min=1;
    }
    cout<<Maxi-Mini<<' '<<Max*Min<<'\n';

    return 0;
}
