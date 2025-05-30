#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<int>
#define pb              push_back
#define mp              make_pair

#define ff              first
#define ss              second


#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int arr[1002];
int main()
{
    //fast_in_out
    int t;
    cin>>t;
    for(int x=1;x<=t;x++)
    {
        int ans=0,n,maximum=0;
        cin>>n;

        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        if(arr[1]>arr[2])ans++;
        for(int i=2;i<n;i++)
        {
            if(arr[i]>maximum){
                    if(arr[i]>arr[i+1])ans++;
                maximum=arr[i];
            }
        }
        if(arr[n]>maximum)ans++;
        cout<<"Case #"<<x<<": "<<ans<<'\n';

    }
    return 0;
}
