#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        int arr[n+1];
        for(int i=0;i<n;i++)cin>>arr[i];
        int diff[n+1];
        sort(arr,arr+n);
        for(int i=1;i<n;i++){
            diff[i]=arr[i]=arr[i-1];
            cout<<diff[i]<<"\t";
        }
        int minim=0;
        for(int i=1;i<n;i++)minim=max(minim,arr[i]);
        cout<<minim<<"\n";
    }
    return 0;
}