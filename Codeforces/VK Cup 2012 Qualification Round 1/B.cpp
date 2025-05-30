#include<bits/stdc++.h>
using namespace std;
int main(){
    int taxi=0,x,n,cur;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    taxi+=mp[4];
    taxi+=mp[3];
    mp[1]-=min(mp[3],mp[1]);
    taxi+=mp[2]/2;
    if(arr[2]%2){
        mp[1]-=min
    }
    //taxi+=(mp[2]/2);
    // taxi+=(min(mp[3],mp[1]));
    // if(mp[3]>mp[1]){
    //     taxi+=mp[3];
    //     mp[1]=0;
    // }
    // taxi+=(mp[2]*2)/4;
    // cur=(mp[2]*2)%4;
    // else if(mp[1]>mp[3]){
    //     int cur=mp[1]-mp[3];
    //     taxi+=(cur/4);
    //     if(cur%4)taxi++;
    // }
    cout<<taxi<<"\n";
    return 0;
}