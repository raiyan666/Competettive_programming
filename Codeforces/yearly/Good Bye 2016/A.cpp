#include<bits/stdc++.h>
using namespace std;
int arr[11];
int main(){
    int n,cnt=0,k;
    cin>>n>>k;
    arr[0]=k;
    for(int i=1;i<=n;i++){
        arr[i]=(i*5)+arr[i-1];
        // cout<<arr[i]<<" ";
        if(arr[i]<=240){
            cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}