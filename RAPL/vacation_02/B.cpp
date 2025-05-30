#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)cin>>arr[i];
        int minim=arr[n-1],bad=0;
        for(int i=n-1;i>=0;i--){
            if(arr[i]>minim)bad++;
            minim=min(minim,arr[i]);
        }
        cout<<bad<<"\n";
    }
    return 0;
}