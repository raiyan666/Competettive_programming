#include<bits/stdc++.h>
#define ll long long 
#define nl cout<<'\n';
#define forn(n) for(int i=1;i<=n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--){
        
    // }
    int n;
    cin>>n;
    ll sum=0,x=0,y=0;
    vector<ll>con(n+1);
    forn(n){
        cin>>con[i];
    }
    for(int i=1,cnt=1,j=n;cnt<=n;++cnt){
        if(cnt%2){
            
            ll maxim=max(con[i],con[j]);
            if(maxim==con[i]){
                y=con[i];
                ++i;
            }
            else {
                y=con[j];
                --j;
            }
            sum+=y;
            cout<<"taro korse "<<"Y : "<<y<<"\tsum:";
        }
        else{
            ll maxim=max(con[i],con[j]);
            if(maxim==con[i]){
                x=con[i];
                ++i;
            }
            else {
                x=con[j];
                --j;
            }
            sum-=x;
            cout<<"jiro korse "<<"X : "<<x<<"\tsum:";
            //cout<<"sum"
        }  
        cout<<sum<<'\n';
         
    }
    cout<<sum<<'\n';
    return 0;
}