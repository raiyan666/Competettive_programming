#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<int>
#define pb              push_back
#define mp              make_pair

#define ff              first
#define ss              second

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int arr[100005];
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    int t,j=0;cin>>t;
    for(int i=0;i<t;i++)cin>>arr[i];
    sort(arr+1,arr+t);
    cout<<arr[1];
    /*if(arr[t-1]+arr[t-2]>arr[0])j++;
    if(arr[t-1]+arr[t-2]>arr[1])j++;
    if(arr[t-1]+arr[t-3]>arr[2])j++;
    if(j==3&&t>4)cout<<"YES\n";
    else cout<<"NO\n";*/
    return 0;
}
