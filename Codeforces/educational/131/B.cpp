#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        //vector<int>con;
        bool arr[n+1];
        for(int i=0;i<=n;i++)arr[i]=1;
        cout<<"2\n1 ";
        for(int i=2;i<=n;i++ ){
            //cout<<i;
            for(int j=i;j<=n;j*=2){
                if(arr[j])cout<<j<<" ";
                arr[j]=0;
            }
            //cout<<" ";
        }

        cout<<"\n";
    }
    return 0;
}