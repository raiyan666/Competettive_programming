#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        int numberone=0,numberzero=0;
        for(int i=0;i<(int)s.size();i++){
            if(s[i]=='1')numberone++;
            else numberzero++;
        }
        int donezero=0,doneone=0,ans=min(numberone,numberzero);
        for(int i=0;i<(int)s.size();i++){
            if(s[i]!='1') donezero++; 
            else doneone++;
            ans=min(ans,donezero+numberone-doneone);//bam pashe sob one ar dan pashe zero te convert
            //cout<<donezero+numberone-doneone<<'\t';
            ans=min(ans,doneone+numberzero-donezero);
            //cout<<doneone+numberzero-donezero<<'\t';
        } 
        cout<<ans<<endl;
    }
    return 0;
}