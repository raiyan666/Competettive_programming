#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define ll              long long

#define pb              push_back
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    vector<string>con;
    string s;
    int i=0,maxim=0;
    while(getline(cin,s)){
        con.pb(s);
        maxim=max(maxim,(int)(s.size()));
        i++;
        //if(i==7)break;
    }
    bool t=0;
    //cout<<maxim<<'\n';
    for(int j=0;j<maxim+2;j++)cout<<'*';
    cout<<'\n';
    for(auto it=con.begin();it!=con.end();it++){
        cout<<'*';
        string str=*it;
        int rem=maxim-(int)(str.size());
        int lim=rem/2;//if(rem%2)lim++;
        if(rem&1){
            lim+=t;
            t=!t;
        }
        for(int j=0;j<lim;j++)cout<<' ';
        cout<<*it;
        for(int j=0;j<rem-lim;j++)cout<<' ';
        cout<<"*"<<"\n";
    }
    for(int j=0;j<maxim+2;j++)cout<<'*';
    cout<<'\n';
    return 0;
}
