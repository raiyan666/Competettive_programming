#include <bits/stdc++.h>

#define ff              first
#define ss              second
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;

int main()
{
    fast_in_out
    map<string,int>con;
    int t;
    string s;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s;
        con[s]++;
    }
    int m=0;
    for(auto it=con.begin();it!=con.end();it++){
        if(it->ss>=m){
            m=it->ss;
            s=it->ff;
        }
    }
    cout<<s<<'\n';
    return 0;
}
