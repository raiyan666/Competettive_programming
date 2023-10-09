#include <bits/stdc++.h>
#define ll              long long
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

int main()
{
    int arr[200005];
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t;
    int n;cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    int maxim=arr[0];
    ll sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]<maxim){
            sum+=(maxim-arr[i]);
        }
        else maxim=arr[i];
    }
    cout<<sum;
    return 0;
}
