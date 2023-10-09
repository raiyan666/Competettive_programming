#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    int t,x,n;
    string s;
    cin>>t;
    //n=t;
    while(t--){
        int a=0;
        bool h=false,y=false;
        cin>>x;
        //cin.ignore();
        cin>>s;

        //cout<<n-t<<" : ";
        for(int i=0;i<x;i++){
            if(s[i]=='>')h=true;
            else if(s[i]=='<')y=true;
        }
        if(!(h&&y)){
            cout<<x<<'\n';
        }
        else {
            s+=s[0];
            for(int i=0;i<x;i++)if(s[i]=='-'||s[i+1]=='-')a++;
            cout<<a<<'\n';
        }
    }
    return 0;
}
