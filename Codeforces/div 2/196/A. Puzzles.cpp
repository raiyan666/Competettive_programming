#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int arr[52];
int main()
{
    fast_in_out
    int m,n;
    cin>>n>>m;
    for(int i=1;i<=m;i++)cin>>arr[i];

    sort(arr+1,arr+m+1);
    /*for(int i=1;i<=m;i++)cout<<arr[i]<<' ';
        cout<<'\n';*/
    int mini=arr[n]-arr[1];
    for(int i=1;i+n-1<=m;i++){
    /*cout<<arr[i+n-1]<<' '<<arr[i]<<'\t';
    cout<<"minimum "<<mini<<'\n';*/
        mini=min(mini,(arr[i+n-1]-arr[i]));
    }

    cout<<mini<<'\n';
    return 0;
}
