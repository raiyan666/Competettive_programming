#include <bits/stdc++.h> 

using namespace std;
int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    //cout<<t<<'\n';
    int n,m;

    while(t--){
        cin>>n>>m;

        //cout<<n<<'\t'<<m<<'\n';
        double rem=double(n)/m;
        double ans=double(n)/m;
        //cout<<rem<<'\n';
        
        while(rem<n){
            rem*=2;
            cout<<rem<<'\t';
        }
        if(int(rem)-n==0){
            cout<<"\nbuga"<<ans<<'\n';
            //rem=-1;
        }
        else{
            rem=-1;
            cout<<rem<<'\t'<<ans<<'\n';
            
        }
        
    }
    return 0;
}