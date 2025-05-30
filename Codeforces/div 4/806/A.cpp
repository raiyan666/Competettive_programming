#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int m=0;
        if(s.size()==3){
            if(s[0]=='y'||s[0]=='Y')m++;
            if(s[1]=='e'||s[1]=='E')m++;
            if(s[2]=='s'||s[2]=='S')m++;
        }        
        //;cout<<m<<"\t";
        if(m==3)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}