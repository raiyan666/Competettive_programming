#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,odd=0,even=0;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2)even++;
        else odd++;
    }
    if(even && odd)sort(arr,arr+n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}