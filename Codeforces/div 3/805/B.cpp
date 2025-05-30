#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int cnt=0,si=s.size();
        for(int i=0;i<s.size();){
            unordered_map<char,bool>mp;
            while(mp.size()<=3){
               // if(i>=si)break;
                if(!mp.count(s[i]))mp[s[i]]=1;
                //cout<<s[i];
                i++;
                  
            }
            i--;
            mp.clear();
            cnt++;
           // cout<<cnt;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}