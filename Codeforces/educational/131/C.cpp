#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        ll m,n,sum=0,mid,x,lo=0;
        cin>>n>>m;
        vector<ll>mp(n+1,0);
        for(ll i=0;i<m;i++){
            cin>>x;
            mp[x]++;
        }
        
        ll hi=2*m;
       // bool val=false;
        while(lo+1<hi){
            mid=lo+(hi-lo)/2;
            ll tasks=0;
            for(ll i=1;i<=n;i++){
                if(mp[i]>=mid){
                    tasks+=mid;
                }
                else{
                    tasks+=mp[i] + ((mid-mp[i])/2);
                    
                }
                //cout<<tasks<<"\t";
            }
           // cout<<"hi :"<<hi<<"\tlo: "<<lo<<"\t";
            if(tasks>=m)hi=mid ;
            else lo=mid;
        }
        cout<<hi<<"\n";
        
    }
    return 0;
}