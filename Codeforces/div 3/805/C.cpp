#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    //string s;
    cin>>t;
    while(t--){
        //cin>>s;
        //getline(s);
        cin>>n>>k;
        int q1,q2;
        map<int, pair<int,int>>mp;
        for(int i=1;i<=n;i++){
            cin>>q1;
            if(!mp.count(q1)){
                mp[q1].first=i;
                mp[q1].second=i;
            }
            else mp[q1].second=i;
        }
        while(k--){
            cin>>q1>>q2;
            if(!mp.count(q1) || !mp.count(q2)|| mp[q1].first>mp[q2].second){
                cout<<"NO\n";
            }
            else cout<<"YES\n";
            //int start=-1,stop=-1;
            //bool val=false;
            // for(int i=0;i<n;i++){
            //     if(arr[i]==q1 && start==-1)start=i;
            //     if(arr[i]==q2 && start!=-1){
            //         stop=i;
            //         val=true;
            //         break;
            //     }
            // }
            // if(val)
            // else cout<<"NO\n";
        }
    }
    return 0;
}