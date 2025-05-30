#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans=0,val=-1;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        //ans=arr[0];
        int sum=0;
        int zero=-1;
        for(int i=0;i<n-1;++i){
            // if(val<1){
            if(zero>0 && arr[i]==0)sum+=sum;
            else sum+=arr[i];
            if(zero==0 && arr[i]>0)++zero;
            if(zero==-1 && arr[i]==0)++zero;
            
            // if(val&&arr[i]==0)ans+=arr[i];
            // ans+=arr[i];
            // if(val==0&& arr[i+1]==0)val++;
            // //if(val && arr[i]==0)ans+=arr[i-1];
            // //if(val==0 && arr[i]==0 && arr[i-1])val++;
            cout<<"zero "<<zero<<"\tsum"<<sum<<'\n';
        }
        if(sum)++sum;
        cout<<"ans: ";
        cout<<sum<<"\n";
    }
    return 0;
}