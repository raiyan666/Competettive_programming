#include <bits/stdc++.h>

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
int arr[53];
using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    int t;cin>>t;
    while(t--){
        int x,Min=1002;cin>>x;
        for(int i=0;i<x;i++)cin>>arr[i];
        sort(arr,arr+x);
        for(int i=1;i<x;i++)Min=min(Min,arr[i]-arr[i-1]);
        cout<<Min<<'\n';
    }
    return 0;
}
