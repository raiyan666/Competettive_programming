#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,a,b,p,q,r,s;
    cin>>n>>a>>b>>p>>q>>r>>s;
    long long int k1=max(1-a,1-b), k2=min(n-a,n-b);
    long long int k3=max(1-a,b-n), k4=min(n-a,b-1);
    for(long long int i=p;i<=q;i++){
        for(long long int j=r;j<=s;j++){
            char c='.';
            int k=i-a;
            if(i-a==j-b){
                if((k1<=k) && (k<=k2)){
                    c='#';
                }
            }
            if(i-a==b-j){
                if((k3<=k) && (k<=k4)){
                    c='#';
                } 
            }
            cout<<c;
        }
        cout<<"\n";
    }
    return 0;
}