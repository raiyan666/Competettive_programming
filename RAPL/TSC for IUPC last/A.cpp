#include<bits/stdc++.h>
#define ll long long 
#define nl cout<<'\n';
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--){
        int n;
        cin>>n;
        int A[101],B[101]={0},sum=0;
        B[0]=0;
        //vector<int>vi;
        for(int i=1;i<=n;i++){
            cin>>A[i];
            B[i]=A[i]+B[i-1];
            //cout<<B[i]<<"\t";
        }//cout<<B[n+1];nl;
        int maxim=0;
        if(B[n]%10==0){
            for(int i=1;i<=n;i++){
                if((B[n]-A[i])%10!=0)maxim=max(maxim,B[n]-A[i]);
                //cout<<maxim<<"\t";
            }
            cout<<maxim;
        }
        else cout<<B[n];
        nl
    return 0;
}