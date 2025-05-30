#include<bits/stdc++.h>
using namespace std;
long long int arr[10];
int main(){
    long long int t;
    cin>>t;
    arr[0]=1;
    //long long int cur=10;
    for(long long int i=1;i<=10;i++){
        arr[i]=arr[i-1]*10;
        //cout<<arr[i]<<"\n";
    }
    while(t--){
        long long int m;
        cin>>m;
        long long int ans=0,j=0;
        //for(long long int j=0;)
        while((m-arr[j])>=0){
            ans=m-arr[j];
            //if(ans<0)break;
            j++;
            //cout<<ans<<"\n";
        }
        //ans=min(ans,abs(m-arr[j]));
        cout<<ans<<"\n";
    }
    return 0;
}