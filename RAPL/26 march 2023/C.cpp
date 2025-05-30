#include<bits/stdc++.h>
using namespace std;
#define ll long int
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,count=0,chain_len=0,sum=0;
        cin>>n;
        chain_len-n*2;
        //cout<<sum<<'\t'<<chain_len<<'\n';
        for(ll i=2;i*(i+1)<chain_len;i++){
            
            /////////(1.0 * N - (L * (L + 1)) / 2) / (L + 1)
            int store=i+1;
            double a=(1.00 * n -(( i * (i+1  ))/2)  )/store ;

            
            if(a-int(a)==0.00 ){
                //cout<<a<<'\t'; 
                count++;
            }
        }
        cout<<count<<'\n';

    }
    return 0;
    
}