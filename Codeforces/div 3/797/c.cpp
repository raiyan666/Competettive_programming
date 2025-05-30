#include <iostream>
#include <queue>
using namespace std;
int main(){
    int t;
    int a[200005],b[200005],c[200005];
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        a[n]=0,b[n]=0;
        queue<int>con;
        for(int i=0;i<n;i++){
            if(con.empty()){
                con.push(a[i]);
            }
            int x=con.front();
            cout<<(b[i]-x)<<" ";
            if(!con.empty())   con.pop();
            if(a[i+1]<b[i]){
                con.push(b[i]);
            }
        }
    
        cout<<"\n";
    }
}