#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt=0;
    for(int i=s.size()-1;i>=0;){
        if(s[i]=='1'){
            cnt++;
            while(s[i]=='1')i--;
        }
        if(i>=0){
            if(cnt)cnt++;
            while(s[i]=='0')i--;
        }
        
    }
    cout<<cnt<<"\n";
    return 0;
}