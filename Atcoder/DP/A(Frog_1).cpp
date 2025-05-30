#include<bits/stdc++.h>
#define ll long long 
#define nl cout<<'\n';
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    vector<int>arr(t+1);
    forn(t)cin>>arr[i];
    vector<int>dp(t+1,0);
    dp[0]=0,dp[1]=abs(arr[1]-arr[0]);
    //forn(t)cout<<dp[i]<<'\t';
    for(int i=2;i<t;i++){
        dp[i]=min(abs(arr[i]-arr[i-1])+dp[i-1],abs(arr[i]-arr[i-2])+dp[i-2]);
        //cout<<dp[i]<<"\t";
    }
    cout<<dp[t-1];
    nl;
    return 0;
}