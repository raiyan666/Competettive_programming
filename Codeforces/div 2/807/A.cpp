#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,m;
        bool val=1;
        cin>>n>>x;
        int lim=(2*n)+1;
        int con[lim];
        for(int i=1;i<lim;i++){
            cin>> con[i];
        }
         
        sort(con+1,con+lim);
        // for(int i=1;i<lim;i++){
        //     cout<<con[i]<<"\t";
        // }
        for(int i=1;i<=n;i++){
           //cout<<(con[i]+x)<<'\t'<<con[i+n]<<'\t';
            if((con[i]+x)>con[i+n])val=0;
        }
        if(val)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}