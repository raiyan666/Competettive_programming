#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    m=arr[0];
    for(int i=1;i<n;i++){
        m=m&arr[i];
        cout<<m<<'\n';
    }
    if(m)cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}