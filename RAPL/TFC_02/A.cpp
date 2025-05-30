#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int n,p,cnt=0,ans=0;
    scanf("%lu%lu",&n,&p);
    string s;
    cin>>s;
    vector<string> con;
    vector<unsigned long long int> num;
    
    for(unsigned long long int i=0;i<s.length();i++){
        string subs;
        for(unsigned long long int j=i;j<s.length();j++){
            subs+=s[j];
            stringstream geek(subs);
            unsigned long long int x=0;
            geek>>x;
            num.push_back(x);
            //con.push_back(subs);
            cnt++;
        }
    }
    for(int i=0;i<cnt;i++){
        //cout<<num[i]<<"\t";
        if(num[i]%p==0)ans++;
    }
    cout<<ans<<"\n";
}