#include<iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,max,cur=0;
        cin>>n>>k;
        string s;
        cin>>s;
        //cout<<s.size()-1<<endl;
        int arr[n+1];
        for(int i=0;i<=n;i++)arr[i]=0;
        // for(int i=0;i<k && i<s.size();i++){
        //     if(s[i]=='W')arr[0]++;
        // }
        //int cur=0;
        for(int i=1;i<=n;i++){
            arr[i]=arr[i-1];
            if(s[i-1]=='W')arr[i]++;
            //cout<<arr[i]<<'\t';
        }
        max=2147483646;
        for(int i=k;i<=n;i++){

            //cout<<arr[i]-arr[i-k]<<'\t';

            max=min(max,arr[i]-arr[i-k]);
        }
            
        cout<<max<<endl;
    }
    return 0;
}