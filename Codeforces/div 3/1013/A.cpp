#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    map<int,int>mp;
    vector<int>arr(n);
    int maxim=0;
    mp[0]=3,mp[1]=1,mp[2]=2,mp[3]=1,mp[5]=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(mp[arr[i]]>0)maxim=i;
            mp[arr[i]]--;
        }
        for(auto x:mp){
            if(x.second>0){
                return 0;
            }
        }
        return maxim+1;

    
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int ans=solve();
        cout<<ans<<'\n';
    }
    return 0;
}