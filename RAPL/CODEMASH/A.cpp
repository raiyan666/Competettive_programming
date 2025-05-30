#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    int max=0,cnt=0;
    string s;
    cin>>n>>m;
    map<string,int> con ;

    for(int i=0;i<n;i++){
        cin>>s;
        con[s]=0;
    }
    for(int i=0;i<m;i++){
        int t;
        cin>>t;
        for(int j=0;j<t;j++){
            cin>>s;
            if(con.count(s)){
                con[s]++;
                if(max<con[s])max=con[s];
            }
        }
    }

    for(auto it:con){
        if(max==it.second){
            //cout<<it.first<<endl;
            cnt++;
        }
        else break;
        //cout<<it.first<<'\t'<<it.second<<endl;
    }
    cout<<cnt<<endl;
    for(auto it:con){
        if(max==it.second){
            cout<<it.first<<endl;
        }
        else break;

    }

    
    return 0;
}