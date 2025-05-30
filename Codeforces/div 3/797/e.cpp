#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,ans=0;
        cin>>n>>k;
        int arr[200005];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            ans+=(arr[i]+arr[i+1])/k;
            arr[i]=arr[i]%k;
        }
        sort(arr,arr+n);
        
        cout<<ans<<endl;
    }
}