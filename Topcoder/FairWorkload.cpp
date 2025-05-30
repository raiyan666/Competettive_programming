#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,lo=INT_MIN,hi=0,workers;
    cin>>n;//folders size
    cin>>workers;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        lo=max(lo,arr[i]);//maximum element of array
        hi+=arr[i];//accumulates sum
    }
    while(lo<hi){
        int mid=lo+(hi-lo)/2;

        int required=1,current_load=0;
        for(int i=0;i<n;++i){
            if(current_load+arr[i]<=mid){
                current_load+=arr[i];
               
            }
            
            else{
                ++required;
                 cout<<current_load<<"\t";
                current_load=0;
            }
        }
        if(required<=workers){
            hi=mid;
        }
        else{
            lo=mid+1;
        }
        cout<<"lo: "<<lo<<"\thi: "<<hi<<"\tmid: "<<mid<<"\t"<<"required: "<<required<<"\n";
    }

    cout<<lo<<"\n";
}