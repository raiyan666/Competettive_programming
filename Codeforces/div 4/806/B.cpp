#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    string s;
    while(t--){
        cin>>n>>s;
        int lim=s.size(),sum=0;
        vector<int>mp(51,0);
        for(int i=0;i<lim;i++){
            
            if(mp[s[i]-'A']==0)mp[s[i]-'A']+=2;
            else mp[s[i]-'A']++;
            //sum+=mp[s[i]-'A'];
            //cout<<s[i]<<mp[s[i]-'A'];
        }
        for(int i=0;i<51;i++){
            sum+=mp[i];
        }

        cout<<sum<<"\n";
        
    }
    return 0;
}