#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long arr[4],sum=0;
    for(int i=0;i<3;i++)cin>>arr[i];
    sort(arr,arr+3);
    long long lim=arr[2]-arr[0]+arr[2]-arr[1];
    if(lim>arr[2])cout<<"-1\n";
    else cout<<arr[2]<<'\n';
    // else sum=-1;
    // cout<<sum<<'\n';
    //for(int i=0;i<3;i++)cout<<arr[i]<<"\t";
    return 0;
}