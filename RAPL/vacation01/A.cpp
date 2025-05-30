#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //int d;
    int cnt=0,cnt2=0,arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x=n/2+n%2;
    for(int j=0;j<n;j++){
        if(arr[j]>0){
            cnt++;
        }
        else if(arr[j]<0)cnt2++;    
    }
    if(cnt>=x)cout<<"1\n";
    else if(cnt2>=x)cout<<"-1\n";
    else cout<<"0\n";
    return 0;
}