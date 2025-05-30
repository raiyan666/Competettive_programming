#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    
    string s;
    while(t--){
        int m;
        string r;
        cin>>n;
        vector<int>ans(n+1);
        int arr[n+1],cur;
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<n;i++){
            cin>>m>>r;
            //cur=0;
            for(int j=0;j<m;j++){
                if(r[j]=='D')arr[i]++;
                else arr[i]--;
            }
            //arr[i]+=cur;
            if(arr[i]>0)arr[i]%=10;
            else {
                while(arr[i]<0)arr[i]+=10;
                arr[i]%=10;
            }
            
        }
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        cout<<"\n";
    }
    return 0;
}