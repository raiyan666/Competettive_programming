#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>arr[i];
    for(int i=1;i<=n;i++)arr[i]+=arr[i-1];
    int m,k;
    cin>>m;
    while(m--){
        cin>>k;
        int ans=lower_bound(arr+1,arr+n,k)-arr;
        cout<<ans<<'\n';
    }
}