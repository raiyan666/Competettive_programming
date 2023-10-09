#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int arr[50004];
int main()
{
    fast_in_out
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)cin>>arr[i];
        if(arr[1]+arr[2]>arr[n])cout<<"-1\n";
        else cout<<"1 2 "<<n<<'\n';
    }
    return 0;
}
