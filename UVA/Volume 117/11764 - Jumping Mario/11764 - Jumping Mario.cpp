#include <bits/stdc++.h>

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int arr[52];
int main()
{
    fast_in_out
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int high=0,low=0;
        int q;
        cin>>q;
        for(int j=0;j<q;j++)cin>>arr[j];
        for(int j=1;j<q;j++){
            if(arr[j]>arr[j-1])high++;
            else if(arr[j]<arr[j-1])low++;
        }
        cout<<"Case "<<i<<": "<<high<<" "<<low<<"\n";
    }
    return 0;
}

