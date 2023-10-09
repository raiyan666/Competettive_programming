#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int arr[4];
int main()
{
    fast_in_out
    int t,lim=3;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        for(int j=0;j<lim;j++)cin>>arr[j];
        sort(arr,arr+3);
        cout<<"Case "<<i<<": "<<arr[1]<<"\n";
    }
    return 0;
}
