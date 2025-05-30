#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    cout<<arr[2]-arr[0]<<'\n';
    return 0;
}
